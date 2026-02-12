/*
 * glyph_i.h
 * Devanagari Character 'DEVANAGARI LETTER I' - U+0907
 */

#ifndef GLYPH_I_H
#define GLYPH_I_H

#include "../Devanagari.h"

// Bitmap: 7x10 pixels
const uint8_t PROGMEM i_bitmap[] = {
  0xFE, 0x08, 0x38, 0x40, 0x38, 0x04, 0x04, 0x38, 0x0C, 0x00
};

const Glyph PROGMEM glyph_i = {
  0x0907,        // U+0907: DEVANAGARI LETTER I
  i_bitmap,
  7,             // Width
  10,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_I_H
