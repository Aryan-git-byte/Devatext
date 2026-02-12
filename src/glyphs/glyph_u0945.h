/*
 * glyph_u0945.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0945
 */

#ifndef GLYPH_U0945_H
#define GLYPH_U0945_H

#include "../Devanagari.h"

// Bitmap: 6x4 pixels
const uint8_t PROGMEM u0945_bitmap[] = {
  0x00, 0x4C, 0x38, 0x00
};

const Glyph PROGMEM glyph_u0945 = {
  0x0945,        // U+0945: DEVANAGARI CHARACTER
  u0945_bitmap,
  6,             // Width
  4,             // Height
  -5,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0945_H
