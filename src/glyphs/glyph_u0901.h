/*
 * glyph_u0901.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0901
 */

#ifndef GLYPH_U0901_H
#define GLYPH_U0901_H

#include "../Devanagari.h"

// Bitmap: 6x3 pixels
const uint8_t PROGMEM u0901_bitmap[] = {
  0x54, 0x48, 0x38
};

const Glyph PROGMEM glyph_u0901 = {
  0x0901,        // U+0901: DEVANAGARI CHARACTER
  u0901_bitmap,
  6,             // Width
  3,             // Height
  -5,             // xOffset
  -11,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0901_H
