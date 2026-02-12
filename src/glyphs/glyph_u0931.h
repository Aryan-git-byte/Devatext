/*
 * glyph_u0931.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0931
 */

#ifndef GLYPH_U0931_H
#define GLYPH_U0931_H

#include "../Devanagari.h"

// Bitmap: 7x9 pixels
const uint8_t PROGMEM u0931_bitmap[] = {
  0x7C, 0x08, 0x08, 0x38, 0x20, 0x30, 0x18, 0x28, 0x00
};

const Glyph PROGMEM glyph_u0931 = {
  0x0931,        // U+0931: DEVANAGARI CHARACTER
  u0931_bitmap,
  7,             // Width
  9,             // Height
  -1,             // xOffset
  -8,             // yOffset
  5             // Advance
};

#endif // GLYPH_U0931_H
