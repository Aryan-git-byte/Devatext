/*
 * glyph_u0971.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0971
 */

#ifndef GLYPH_U0971_H
#define GLYPH_U0971_H

#include "../Devanagari.h"

// Bitmap: 3x3 pixels
const uint8_t PROGMEM u0971_bitmap[] = {
  0x00, 0xC0, 0x00
};

const Glyph PROGMEM glyph_u0971 = {
  0x0971,        // U+0971: DEVANAGARI CHARACTER
  u0971_bitmap,
  3,             // Width
  3,             // Height
  1,             // xOffset
  -9,             // yOffset
  4             // Advance
};

#endif // GLYPH_U0971_H
