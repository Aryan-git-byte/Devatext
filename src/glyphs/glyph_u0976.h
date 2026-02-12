/*
 * glyph_u0976.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0976
 */

#ifndef GLYPH_U0976_H
#define GLYPH_U0976_H

#include "../Devanagari.h"

// Bitmap: 10x11 pixels
const uint8_t PROGMEM u0976_bitmap[] = {
  0x3B, 0x80, 0x09, 0x00, 0x09, 0x00, 0x19, 0x00, 0x4F, 0x00, 
  0x61, 0x00, 0x39, 0x00, 0x01, 0x00, 0x00, 0x00, 0x11, 0x00, 
  0x0E, 0x00
};

const Glyph PROGMEM glyph_u0976 = {
  0x0976,        // U+0976: DEVANAGARI CHARACTER
  u0976_bitmap,
  10,             // Width
  11,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_U0976_H
