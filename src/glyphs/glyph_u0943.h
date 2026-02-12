/*
 * glyph_u0943.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0943
 */

#ifndef GLYPH_U0943_H
#define GLYPH_U0943_H

#include "../Devanagari.h"

// Bitmap: 4x4 pixels
const uint8_t PROGMEM u0943_bitmap[] = {
  0x00, 0xC0, 0x80, 0x60
};

const Glyph PROGMEM glyph_u0943 = {
  0x0943,        // U+0943: DEVANAGARI CHARACTER
  u0943_bitmap,
  4,             // Width
  4,             // Height
  -3,             // xOffset
  -1,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0943_H
