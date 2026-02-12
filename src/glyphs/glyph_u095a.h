/*
 * glyph_u095a.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+095A
 */

#ifndef GLYPH_U095A_H
#define GLYPH_U095A_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM u095a_bitmap[] = {
  0x7E, 0x24, 0x24, 0x24, 0x64, 0x24, 0x04, 0x44
};

const Glyph PROGMEM glyph_u095a = {
  0x095A,        // U+095A: DEVANAGARI CHARACTER
  u095a_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_U095A_H
