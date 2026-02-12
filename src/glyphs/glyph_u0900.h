/*
 * glyph_u0900.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0900
 */

#ifndef GLYPH_U0900_H
#define GLYPH_U0900_H

#include "../Devanagari.h"

// Bitmap: 6x4 pixels
const uint8_t PROGMEM u0900_bitmap[] = {
  0x38, 0x48, 0x10, 0x00
};

const Glyph PROGMEM glyph_u0900 = {
  0x0900,        // U+0900: DEVANAGARI CHARACTER
  u0900_bitmap,
  6,             // Width
  4,             // Height
  -5,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0900_H
