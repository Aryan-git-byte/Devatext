/*
 * glyph_u095b.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+095B
 */

#ifndef GLYPH_U095B_H
#define GLYPH_U095B_H

#include "../Devanagari.h"

// Bitmap: 11x9 pixels
const uint8_t PROGMEM u095b_bitmap[] = {
  0x7F, 0xC0, 0x00, 0x80, 0x0F, 0x80, 0x24, 0x80, 0x24, 0x80, 
  0x14, 0x80, 0x1C, 0x80, 0x00, 0x80, 0x08, 0x00
};

const Glyph PROGMEM glyph_u095b = {
  0x095B,        // U+095B: DEVANAGARI CHARACTER
  u095b_bitmap,
  11,             // Width
  9,             // Height
  -1,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_U095B_H
