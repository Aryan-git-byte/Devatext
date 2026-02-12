/*
 * glyph_u0963.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0963
 */

#ifndef GLYPH_U0963_H
#define GLYPH_U0963_H

#include "../Devanagari.h"

// Bitmap: 8x5 pixels
const uint8_t PROGMEM u0963_bitmap[] = {
  0x78, 0xAC, 0x88, 0x4C, 0x06
};

const Glyph PROGMEM glyph_u0963 = {
  0x0963,        // U+0963: DEVANAGARI CHARACTER
  u0963_bitmap,
  8,             // Width
  5,             // Height
  -5,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0963_H
