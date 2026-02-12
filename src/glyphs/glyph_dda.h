/*
 * glyph_dda.h
 * Devanagari Character 'DEVANAGARI LETTER DDA' - U+0921
 */

#ifndef GLYPH_DDA_H
#define GLYPH_DDA_H

#include "../Devanagari.h"

// Bitmap: 9x8 pixels
const uint8_t PROGMEM dda_bitmap[] = {
  0x7F, 0x80, 0x02, 0x00, 0x1E, 0x00, 0x10, 0x00, 0x0E, 0x00, 
  0x21, 0x00, 0x31, 0x00, 0x0E, 0x00
};

const Glyph PROGMEM glyph_dda = {
  0x0921,        // U+0921: DEVANAGARI LETTER DDA
  dda_bitmap,
  9,             // Width
  8,             // Height
  -1,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_DDA_H
