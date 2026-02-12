/*
 * glyph_u0970.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0970
 */

#ifndef GLYPH_U0970_H
#define GLYPH_U0970_H

#include "../Devanagari.h"

// Bitmap: 4x5 pixels
const uint8_t PROGMEM u0970_bitmap[] = {
  0x00, 0x60, 0xB0, 0xB0, 0x60
};

const Glyph PROGMEM glyph_u0970 = {
  0x0970,        // U+0970: DEVANAGARI CHARACTER
  u0970_bitmap,
  4,             // Width
  5,             // Height
  1,             // xOffset
  -8,             // yOffset
  6             // Advance
};

#endif // GLYPH_U0970_H
