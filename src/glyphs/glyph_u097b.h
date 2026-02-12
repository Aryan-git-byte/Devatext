/*
 * glyph_u097b.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+097B
 */

#ifndef GLYPH_U097B_H
#define GLYPH_U097B_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM u097b_bitmap[] = {
  0x7E, 0x24, 0x24, 0x64, 0x64, 0x04, 0x04, 0x3C
};

const Glyph PROGMEM glyph_u097b = {
  0x097B,        // U+097B: DEVANAGARI CHARACTER
  u097b_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U097B_H
