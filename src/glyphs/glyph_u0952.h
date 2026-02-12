/*
 * glyph_u0952.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0952
 */

#ifndef GLYPH_U0952_H
#define GLYPH_U0952_H

#include "../Devanagari.h"

// Bitmap: 4x1 pixels
const uint8_t PROGMEM u0952_bitmap[] = {
  0xF0
};

const Glyph PROGMEM glyph_u0952 = {
  0x0952,        // U+0952: DEVANAGARI CHARACTER
  u0952_bitmap,
  4,             // Width
  1,             // Height
  -5,             // xOffset
  1,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0952_H
