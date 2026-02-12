/*
 * glyph_u0954.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0954
 */

#ifndef GLYPH_U0954_H
#define GLYPH_U0954_H

#include "../Devanagari.h"

// Bitmap: 3x4 pixels
const uint8_t PROGMEM u0954_bitmap[] = {
  0x00, 0x20, 0x40, 0x00
};

const Glyph PROGMEM glyph_u0954 = {
  0x0954,        // U+0954: DEVANAGARI CHARACTER
  u0954_bitmap,
  3,             // Width
  4,             // Height
  -3,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0954_H
