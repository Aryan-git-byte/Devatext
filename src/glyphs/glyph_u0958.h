/*
 * glyph_u0958.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0958
 */

#ifndef GLYPH_U0958_H
#define GLYPH_U0958_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM u0958_bitmap[] = {
  0xFF, 0xC0, 0x04, 0x00, 0x3C, 0x00, 0x47, 0x00, 0x44, 0x80, 
  0x4C, 0x80, 0x34, 0x80, 0x44, 0x00
};

const Glyph PROGMEM glyph_u0958 = {
  0x0958,        // U+0958: DEVANAGARI CHARACTER
  u0958_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_U0958_H
