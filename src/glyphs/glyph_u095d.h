/*
 * glyph_u095d.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+095D
 */

#ifndef GLYPH_U095D_H
#define GLYPH_U095D_H

#include "../Devanagari.h"

// Bitmap: 7x10 pixels
const uint8_t PROGMEM u095d_bitmap[] = {
  0x7E, 0x08, 0x38, 0x60, 0x48, 0x50, 0x50, 0x38, 0x00, 0x10
};

const Glyph PROGMEM glyph_u095d = {
  0x095D,        // U+095D: DEVANAGARI CHARACTER
  u095d_bitmap,
  7,             // Width
  10,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U095D_H
