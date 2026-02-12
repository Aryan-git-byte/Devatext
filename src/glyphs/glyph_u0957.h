/*
 * glyph_u0957.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0957
 */

#ifndef GLYPH_U0957_H
#define GLYPH_U0957_H

#include "../Devanagari.h"

// Bitmap: 6x4 pixels
const uint8_t PROGMEM u0957_bitmap[] = {
  0x00, 0x78, 0x40, 0x38
};

const Glyph PROGMEM glyph_u0957 = {
  0x0957,        // U+0957: DEVANAGARI CHARACTER
  u0957_bitmap,
  6,             // Width
  4,             // Height
  -7,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0957_H
