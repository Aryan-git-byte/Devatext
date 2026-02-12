/*
 * glyph_u0973.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0973
 */

#ifndef GLYPH_U0973_H
#define GLYPH_U0973_H

#include "../Devanagari.h"

// Bitmap: 10x12 pixels
const uint8_t PROGMEM u0973_bitmap[] = {
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x3B, 0x80, 
  0x09, 0x00, 0x09, 0x00, 0x19, 0x00, 0x4F, 0x00, 0x61, 0x00, 
  0x39, 0x00, 0x01, 0x00
};

const Glyph PROGMEM glyph_u0973 = {
  0x0973,        // U+0973: DEVANAGARI CHARACTER
  u0973_bitmap,
  10,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  9             // Advance
};

#endif // GLYPH_U0973_H
