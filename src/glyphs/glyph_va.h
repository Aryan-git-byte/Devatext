/*
 * glyph_va.h
 * Devanagari Character 'DEVANAGARI LETTER VA' - U+0935
 */

#ifndef GLYPH_VA_H
#define GLYPH_VA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM va_bitmap[] = {
  0xFE, 0x04, 0x3C, 0x44, 0x44, 0x4C, 0x34, 0x04
};

const Glyph PROGMEM glyph_va = {
  0x0935,        // U+0935: DEVANAGARI LETTER VA
  va_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_VA_H
