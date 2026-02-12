/*
 * glyph_ai.h
 * Devanagari Character 'DEVANAGARI LETTER AI' - U+0910
 */

#ifndef GLYPH_AI_H
#define GLYPH_AI_H

#include "../Devanagari.h"

// Bitmap: 8x14 pixels
const uint8_t PROGMEM ai_bitmap[] = {
  0x30, 0x08, 0x00, 0x04, 0xFE, 0x44, 0x44, 0x44, 0x48, 0x20, 
  0x18, 0x04, 0x04, 0x04
};

const Glyph PROGMEM glyph_ai = {
  0x0910,        // U+0910: DEVANAGARI LETTER AI
  ai_bitmap,
  8,             // Width
  14,             // Height
  0,             // xOffset
  -12,             // yOffset
  7             // Advance
};

#endif // GLYPH_AI_H
