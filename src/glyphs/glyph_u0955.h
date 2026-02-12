/*
 * glyph_u0955.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0955
 */

#ifndef GLYPH_U0955_H
#define GLYPH_U0955_H

#include "../Devanagari.h"

// Bitmap: 6x4 pixels
const uint8_t PROGMEM u0955_bitmap[] = {
  0x00, 0x48, 0x38, 0x78
};

const Glyph PROGMEM glyph_u0955 = {
  0x0955,        // U+0955: DEVANAGARI CHARACTER
  u0955_bitmap,
  6,             // Width
  4,             // Height
  -5,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0955_H
