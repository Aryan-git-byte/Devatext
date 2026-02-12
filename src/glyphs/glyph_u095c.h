/*
 * glyph_u095c.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+095C
 */

#ifndef GLYPH_U095C_H
#define GLYPH_U095C_H

#include "../Devanagari.h"

// Bitmap: 9x10 pixels
const uint8_t PROGMEM u095c_bitmap[] = {
  0x7F, 0x80, 0x02, 0x00, 0x1E, 0x00, 0x10, 0x00, 0x0E, 0x00, 
  0x21, 0x00, 0x31, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00
};

const Glyph PROGMEM glyph_u095c = {
  0x095C,        // U+095C: DEVANAGARI CHARACTER
  u095c_bitmap,
  9,             // Width
  10,             // Height
  -1,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_U095C_H
