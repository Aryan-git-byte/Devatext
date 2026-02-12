/*
 * glyph_u0979.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0979
 */

#ifndef GLYPH_U0979_H
#define GLYPH_U0979_H

#include "../Devanagari.h"

// Bitmap: 11x9 pixels
const uint8_t PROGMEM u0979_bitmap[] = {
  0x7F, 0xC0, 0x00, 0x80, 0x0F, 0x80, 0x24, 0x80, 0x34, 0x80, 
  0x1C, 0x80, 0x00, 0x80, 0x14, 0x80, 0x08, 0x00
};

const Glyph PROGMEM glyph_u0979 = {
  0x0979,        // U+0979: DEVANAGARI CHARACTER
  u0979_bitmap,
  11,             // Width
  9,             // Height
  -1,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_U0979_H
