/*
 * glyph_u.h
 * Devanagari Character 'DEVANAGARI LETTER U' - U+0909
 */

#ifndef GLYPH_U_H
#define GLYPH_U_H

#include "../Devanagari.h"

// Bitmap: 7x8 pixels
const uint8_t PROGMEM u_bitmap[] = {
  0xFE, 0x04, 0x04, 0x18, 0x48, 0x44, 0x24, 0x18
};

const Glyph PROGMEM glyph_u = {
  0x0909,        // U+0909: DEVANAGARI LETTER U
  u_bitmap,
  7,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U_H
