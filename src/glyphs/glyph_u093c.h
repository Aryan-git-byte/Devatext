/*
 * glyph_u093c.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+093C
 */

#ifndef GLYPH_U093C_H
#define GLYPH_U093C_H

#include "../Devanagari.h"

// Bitmap: 2x3 pixels
const uint8_t PROGMEM u093c_bitmap[] = {
  0x00, 0x80, 0x00
};

const Glyph PROGMEM glyph_u093c = {
  0x093C,        // U+093C: DEVANAGARI CHARACTER
  u093c_bitmap,
  2,             // Width
  3,             // Height
  -4,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_U093C_H
