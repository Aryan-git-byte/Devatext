/*
 * glyph_u097d.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+097D
 */

#ifndef GLYPH_U097D_H
#define GLYPH_U097D_H

#include "../Devanagari.h"

// Bitmap: 5x8 pixels
const uint8_t PROGMEM u097d_bitmap[] = {
  0x70, 0x08, 0x08, 0x18, 0x30, 0x20, 0x20, 0x20
};

const Glyph PROGMEM glyph_u097d = {
  0x097D,        // U+097D: DEVANAGARI CHARACTER
  u097d_bitmap,
  5,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  6             // Advance
};

#endif // GLYPH_U097D_H
