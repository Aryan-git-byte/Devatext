/*
 * glyph_u097f.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+097F
 */

#ifndef GLYPH_U097F_H
#define GLYPH_U097F_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM u097f_bitmap[] = {
  0x7E, 0x04, 0x3C, 0x54, 0x44, 0x3C, 0x04, 0x7C
};

const Glyph PROGMEM glyph_u097f = {
  0x097F,        // U+097F: DEVANAGARI CHARACTER
  u097f_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U097F_H
