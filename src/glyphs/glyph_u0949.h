/*
 * glyph_u0949.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0949
 */

#ifndef GLYPH_U0949_H
#define GLYPH_U0949_H

#include "../Devanagari.h"

// Bitmap: 6x12 pixels
const uint8_t PROGMEM u0949_bitmap[] = {
  0x00, 0x48, 0x30, 0x00, 0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 
  0x10, 0x10
};

const Glyph PROGMEM glyph_u0949 = {
  0x0949,        // U+0949: DEVANAGARI CHARACTER
  u0949_bitmap,
  6,             // Width
  12,             // Height
  -2,             // xOffset
  -12,             // yOffset
  3             // Advance
};

#endif // GLYPH_U0949_H
