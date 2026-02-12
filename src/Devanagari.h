/*
 * Devanagari.h
 * The Complete Bare-Metal Devanagari Engine
 * (Replaces old BitmapRenderer)
 */

#ifndef DEVANAGARI_RENDERER_H
#define DEVANAGARI_RENDERER_H

#include <Arduino.h>
#include <Wire.h>
#include <avr/pgmspace.h>

// =============================================================================
// CONFIGURATION
// =============================================================================
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SSD1306_ADDR  0x3C

// =============================================================================
// GLYPH STRUCTURE (Matches your existing glyph files)
// =============================================================================
struct Glyph {
  uint16_t codepoint;    // Unicode (e.g., 0x0915 for Ka)
  const uint8_t* bitmap; // PROGMEM Pointer
  uint8_t width;
  uint8_t height;
  int8_t xOffset;        // Adjust position (crucial for Matras)
  int8_t yOffset;        // Adjust baseline (crucial for U/UU matras)
  uint8_t advance;       // How much to move cursor after drawing
};

// =============================================================================
// THE ENGINE CLASS
// =============================================================================
class Devanagari {
private:
  // Hardware Buffer (1024 bytes for 128x64)
  uint8_t buffer[SCREEN_WIDTH * SCREEN_HEIGHT / 8];
  
  // State
  int16_t cursorX, cursorY;
  uint8_t textSize;      // 1 = Normal, 2 = Double, etc.
  
  // Font Data
  const Glyph* const* glyphTable; // Pointer to array of Glyph pointers
  uint16_t glyphCount;

  // Internal Helpers
  void sendCommand(uint8_t command);
  void drawPixelInternal(int16_t x, int16_t y, bool color);
  uint16_t utf8Next(const char*& ptr); // Decodes one character from string
  const Glyph* findGlyph(uint16_t code);

public:
  // Constructor
  Devanagari(const Glyph* const* table, uint16_t count);

  // Hardware Control
  void begin();
  void clear();
  void display(); // Push buffer to screen

  // Settings
  void setCursor(int16_t x, int16_t y);
  void setTextSize(uint8_t size);

  // Drawing
  void drawPixel(int16_t x, int16_t y, bool color);
  void drawGlyph(const Glyph* g); // Draws single glyph
  
  // The Magic Function: Write whole sentences
  void print(const char* utf8String);
  void print(int number);
};

#endif