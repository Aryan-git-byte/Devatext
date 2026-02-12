/*
 * glyph_u0929.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0929
 */

#ifndef GLYPH_U0929_H
#define GLYPH_U0929_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM u0929_bitmap[] = {
  0xFE, 0x04, 0x04, 0x7C, 0x64, 0x04, 0x04, 0x24
};

const Glyph PROGMEM glyph_u0929 = {
  0x0929,        // U+0929: DEVANAGARI CHARACTER
  u0929_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U0929_H
