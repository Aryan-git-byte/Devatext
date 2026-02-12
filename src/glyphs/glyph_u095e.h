/*
 * glyph_u095e.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+095E
 */

#ifndef GLYPH_U095E_H
#define GLYPH_U095E_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM u095e_bitmap[] = {
  0xFF, 0xC0, 0x44, 0x00, 0x44, 0x00, 0x47, 0x00, 0x44, 0x80, 
  0x3C, 0x80, 0x04, 0x80, 0x44, 0x00
};

const Glyph PROGMEM glyph_u095e = {
  0x095E,        // U+095E: DEVANAGARI CHARACTER
  u095e_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_U095E_H
