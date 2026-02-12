/*
 * glyph_la.h
 * Devanagari Character 'DEVANAGARI LETTER LA' - U+0932
 */

#ifndef GLYPH_LA_H
#define GLYPH_LA_H

#include "../Devanagari.h"

// Bitmap: 10x9 pixels
const uint8_t PROGMEM la_bitmap[] = {
  0x7F, 0x80, 0x01, 0x00, 0x33, 0x00, 0x2D, 0x00, 0x21, 0x00, 
  0x21, 0x00, 0x31, 0x00, 0x11, 0x00, 0x00, 0x00
};

const Glyph PROGMEM glyph_la = {
  0x0932,        // U+0932: DEVANAGARI LETTER LA
  la_bitmap,
  10,             // Width
  9,             // Height
  -1,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_LA_H
