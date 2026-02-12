/*
 * glyph_u094f.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+094F
 */

#ifndef GLYPH_U094F_H
#define GLYPH_U094F_H

#include "../Devanagari.h"

// Bitmap: 7x12 pixels
const uint8_t PROGMEM u094f_bitmap[] = {
  0x00, 0x98, 0x74, 0x1C, 0x1E, 0x08, 0x08, 0x08, 0x08, 0x08, 
  0x08, 0x08
};

const Glyph PROGMEM glyph_u094f = {
  0x094F,        // U+094F: DEVANAGARI CHARACTER
  u094f_bitmap,
  7,             // Width
  12,             // Height
  -3,             // xOffset
  -12,             // yOffset
  4             // Advance
};

#endif // GLYPH_U094F_H
