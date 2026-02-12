/*
 * glyph_u097a.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+097A
 */

#ifndef GLYPH_U097A_H
#define GLYPH_U097A_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM u097a_bitmap[] = {
  0xFE, 0x24, 0x34, 0x54, 0x4C, 0x3C, 0x04, 0x04
};

const Glyph PROGMEM glyph_u097a = {
  0x097A,        // U+097A: DEVANAGARI CHARACTER
  u097a_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U097A_H
