/*
 * glyph_u094d.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+094D
 */

#ifndef GLYPH_U094D_H
#define GLYPH_U094D_H

#include "../Devanagari.h"

// Bitmap: 5x3 pixels
const uint8_t PROGMEM u094d_bitmap[] = {
  0x60, 0x10, 0x08
};

const Glyph PROGMEM glyph_u094d = {
  0x094D,        // U+094D: DEVANAGARI CHARACTER
  u094d_bitmap,
  5,             // Width
  3,             // Height
  -3,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_U094D_H
