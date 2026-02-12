/*
 * devanagari_renderer.cpp
 * Implementation of the Devanagari Engine
 */

#include "Devanagari.h"

// =============================================================================
// CONSTRUCTOR & SETUP
// =============================================================================
Devanagari::Devanagari(const Glyph* const* table, uint16_t count) 
  : glyphTable(table), glyphCount(count) {
  cursorX = 0;
  cursorY = 10; // Default baseline
  textSize = 1;
}

void Devanagari::begin() {
  Wire.begin();
  
  // Init Sequence for SSD1306 (Standard Bare Metal Init)
  sendCommand(0xAE); // Display OFF
  sendCommand(0x8D); sendCommand(0x14); // Charge Pump ON
  sendCommand(0x20); sendCommand(0x00); // Horizontal Addressing Mode
  sendCommand(0xA1); // Segment Remap
  sendCommand(0xC8); // COM Scan Direction
  sendCommand(0xDA); sendCommand(0x12); // COM Config
  sendCommand(0x81); sendCommand(0xCF); // Contrast
  sendCommand(0xAF); // Display ON
  
  clear();
  display();
}

void Devanagari::sendCommand(uint8_t command) {
  Wire.beginTransmission(SSD1306_ADDR);
  Wire.write(0x00); // Co=0, D/C=0 (Command)
  Wire.write(command);
  Wire.endTransmission();
}

// =============================================================================
// BUFFER & DRAWING
// =============================================================================
void Devanagari::clear() {
  memset(buffer, 0, sizeof(buffer));
  cursorX = 0;
  cursorY = 20;
}

void Devanagari::display() {
  sendCommand(0x21); sendCommand(0); sendCommand(127); // Column Range
  sendCommand(0x22); sendCommand(0); sendCommand(7);   // Page Range

  // Send buffer in 16-byte chunks for stability
  for (uint16_t i = 0; i < sizeof(buffer); i++) {
    if (i % 16 == 0) {
      if (i > 0) Wire.endTransmission();
      Wire.beginTransmission(SSD1306_ADDR);
      Wire.write(0x40); // Data Mode
    }
    Wire.write(buffer[i]);
  }
  Wire.endTransmission();
}

void Devanagari::drawPixelInternal(int16_t x, int16_t y, bool color) {
  if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT) return;
  
  if (color)
    buffer[x + (y / 8) * SCREEN_WIDTH] |= (1 << (y & 7));
  else
    buffer[x + (y / 8) * SCREEN_WIDTH] &= ~(1 << (y & 7));
}

void Devanagari::drawPixel(int16_t x, int16_t y, bool color) {
  // Respects text size for manual pixel drawing if needed
  for (uint8_t i = 0; i < textSize; i++) {
    for (uint8_t j = 0; j < textSize; j++) {
      drawPixelInternal(x + i, y + j, color);
    }
  }
}

// =============================================================================
// TEXT ENGINE
// =============================================================================
void Devanagari::setCursor(int16_t x, int16_t y) {
  cursorX = x;
  cursorY = y;
}

void Devanagari::setTextSize(uint8_t size) {
  textSize = (size > 0) ? size : 1;
}

const Glyph* Devanagari::findGlyph(uint16_t code) {
  // Simple linear search. Fast enough for ~100 glyphs.
  for (uint16_t i = 0; i < glyphCount; i++) {
    // We must read the pointer from PROGMEM, then the codepoint from PROGMEM
    const Glyph* gPtr = (const Glyph*)pgm_read_ptr(&glyphTable[i]);
    uint16_t gCode = pgm_read_word(&gPtr->codepoint);
    
    if (gCode == code) return gPtr;
  }
  return nullptr; // Not found
}

void Devanagari::drawGlyph(const Glyph* g) {
  if (!g) return;

  // Read Metadata from PROGMEM
  uint8_t w = pgm_read_byte(&g->width);
  uint8_t h = pgm_read_byte(&g->height);
  int8_t xo = (int8_t)pgm_read_byte(&g->xOffset);
  int8_t yo = (int8_t)pgm_read_byte(&g->yOffset);
  uint8_t adv = pgm_read_byte(&g->advance);
  const uint8_t* bmp = (const uint8_t*)pgm_read_ptr(&g->bitmap);

  // Apply Scaling
  int16_t drawX = cursorX + (xo * textSize);
  int16_t drawY = cursorY + (yo * textSize);
  
  // Render Bitmap
  uint8_t byteWidth = (w + 7) / 8;
  for (uint8_t j = 0; j < h; j++) {
    for (uint8_t i = 0; i < w; i++) {
      uint8_t byte = pgm_read_byte(&bmp[j * byteWidth + (i / 8)]);
      if (byte & (0x80 >> (i % 8))) {
        // Draw Scaled Pixel
        for (uint8_t sx = 0; sx < textSize; sx++) {
          for (uint8_t sy = 0; sy < textSize; sy++) {
            drawPixelInternal(drawX + (i * textSize) + sx, 
                              drawY + (j * textSize) + sy, true);
          }
        }
      }
    }
  }

  // Advance Cursor
  cursorX += (adv * textSize);
}

// =============================================================================
// STRING PARSER (UTF-8)
// =============================================================================
uint16_t Devanagari::utf8Next(const char*& ptr) {
  uint8_t c = *ptr++;
  if (c == 0) return 0; // End
  
  // ASCII
  if ((c & 0x80) == 0) return c;
  
  // 3-Byte Sequence (Devanagari is mostly 3 bytes: 0xE0 0xA4/0xA5 0xXX)
  if ((c & 0xF0) == 0xE0) {
    uint8_t c2 = *ptr++;
    uint8_t c3 = *ptr++;
    return ((c & 0x0F) << 12) | ((c2 & 0x3F) << 6) | (c3 & 0x3F);
  }
  
  // 2-Byte Sequence
  if ((c & 0xE0) == 0xC0) {
    uint8_t c2 = *ptr++;
    return ((c & 0x1F) << 6) | (c2 & 0x3F);
  }
  
  return c; // Fallback
}

void Devanagari::print(const char* utf8String) {
  const char* p = utf8String;
  while (*p) {
    uint16_t code = utf8Next(p);
    
    // Handle Newline
    if (code == '\n') {
      cursorX = 0;
      cursorY += (16 * textSize); // Line height estimate
      continue;
    }
    
    // Handle Space
    if (code == ' ') {
      cursorX += (5 * textSize);
      continue;
    }

    // Draw Glyph
    const Glyph* g = findGlyph(code);
    if (g) {
      drawGlyph(g);
    } else {
      // Skip unknown chars
    }
  }
}

void Devanagari::print(int number) {
  char buf[10];
  itoa(number, buf, 10);
  const char* p = buf;
  while(*p) {
    const Glyph* g = findGlyph(*p++); 
    if(g) drawGlyph(g);
    else cursorX += 6*textSize; 
  }
}