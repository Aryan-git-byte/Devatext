/*
 * glyph_u093a.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+093A
 */

#ifndef GLYPH_U093A_H
#define GLYPH_U093A_H

#include "../Devanagari.h"

// Bitmap: 1x4 pixels
const uint8_t PROGMEM u093a_bitmap[] = {
  0x00, 0x80, 0x80, 0x80
};

const Glyph PROGMEM glyph_u093a = {
  0x093A,        // U+093A: DEVANAGARI CHARACTER
  u093a_bitmap,
  1,             // Width
  4,             // Height
  -2,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_U093A_H
