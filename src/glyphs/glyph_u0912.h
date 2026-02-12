/*
 * glyph_u0912.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0912
 */

#ifndef GLYPH_U0912_H
#define GLYPH_U0912_H

#include "../Devanagari.h"

// Bitmap: 13x12 pixels
const uint8_t PROGMEM u0912_bitmap[] = {
  0x00, 0x00, 0x01, 0x00, 0x01, 0xC0, 0x00, 0x20, 0x3B, 0xF0, 
  0x09, 0x20, 0x09, 0x20, 0x19, 0x20, 0x4F, 0x20, 0x41, 0x20, 
  0x39, 0x20, 0x01, 0x20
};

const Glyph PROGMEM glyph_u0912 = {
  0x0912,        // U+0912: DEVANAGARI CHARACTER
  u0912_bitmap,
  13,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  12             // Advance
};

#endif // GLYPH_U0912_H
