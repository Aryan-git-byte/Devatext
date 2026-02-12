/*
 * glyph_u094a.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+094A
 */

#ifndef GLYPH_U094A_H
#define GLYPH_U094A_H

#include "../Devanagari.h"

// Bitmap: 7x12 pixels
const uint8_t PROGMEM u094a_bitmap[] = {
  0x00, 0x40, 0x70, 0x08, 0x1C, 0x08, 0x08, 0x08, 0x08, 0x08, 
  0x08, 0x08
};

const Glyph PROGMEM glyph_u094a = {
  0x094A,        // U+094A: DEVANAGARI CHARACTER
  u094a_bitmap,
  7,             // Width
  12,             // Height
  -3,             // xOffset
  -12,             // yOffset
  3             // Advance
};

#endif // GLYPH_U094A_H
