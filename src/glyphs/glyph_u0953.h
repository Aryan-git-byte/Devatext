/*
 * glyph_u0953.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0953
 */

#ifndef GLYPH_U0953_H
#define GLYPH_U0953_H

#include "../Devanagari.h"

// Bitmap: 3x4 pixels
const uint8_t PROGMEM u0953_bitmap[] = {
  0x00, 0x40, 0x20, 0x00
};

const Glyph PROGMEM glyph_u0953 = {
  0x0953,        // U+0953: DEVANAGARI CHARACTER
  u0953_bitmap,
  3,             // Width
  4,             // Height
  -4,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0953_H
