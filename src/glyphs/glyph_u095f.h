/*
 * glyph_u095f.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+095F
 */

#ifndef GLYPH_U095F_H
#define GLYPH_U095F_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM u095f_bitmap[] = {
  0xFE, 0x24, 0x24, 0x44, 0x44, 0x3C, 0x04, 0x44
};

const Glyph PROGMEM glyph_u095f = {
  0x095F,        // U+095F: DEVANAGARI CHARACTER
  u095f_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U095F_H
