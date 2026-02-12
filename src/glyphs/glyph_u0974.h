/*
 * glyph_u0974.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0974
 */

#ifndef GLYPH_U0974_H
#define GLYPH_U0974_H

#include "../Devanagari.h"

// Bitmap: 13x12 pixels
const uint8_t PROGMEM u0974_bitmap[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x3B, 0xF0, 
  0x09, 0x20, 0x09, 0x20, 0x19, 0x20, 0x4F, 0x20, 0x61, 0x20, 
  0x39, 0x20, 0x01, 0x20
};

const Glyph PROGMEM glyph_u0974 = {
  0x0974,        // U+0974: DEVANAGARI CHARACTER
  u0974_bitmap,
  13,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  12             // Advance
};

#endif // GLYPH_U0974_H
