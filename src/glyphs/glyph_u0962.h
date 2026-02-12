/*
 * glyph_u0962.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0962
 */

#ifndef GLYPH_U0962_H
#define GLYPH_U0962_H

#include "../Devanagari.h"

// Bitmap: 7x5 pixels
const uint8_t PROGMEM u0962_bitmap[] = {
  0x7C, 0xB4, 0x8C, 0x40, 0x0C
};

const Glyph PROGMEM glyph_u0962 = {
  0x0962,        // U+0962: DEVANAGARI CHARACTER
  u0962_bitmap,
  7,             // Width
  5,             // Height
  -5,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0962_H
