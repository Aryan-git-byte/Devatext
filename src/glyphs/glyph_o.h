/*
 * glyph_o.h
 * Devanagari Character 'DEVANAGARI LETTER O' - U+0913
 */

#ifndef GLYPH_O_H
#define GLYPH_O_H

#include "../Devanagari.h"

// Bitmap: 13x12 pixels
const uint8_t PROGMEM o_bitmap[] = {
  0x01, 0x80, 0x00, 0x40, 0x00, 0x20, 0x00, 0x20, 0x3B, 0xF0, 
  0x09, 0x20, 0x19, 0x20, 0x4F, 0x20, 0x41, 0x20, 0x21, 0x20, 
  0x39, 0x20, 0x01, 0x20
};

const Glyph PROGMEM glyph_o = {
  0x0913,        // U+0913: DEVANAGARI LETTER O
  o_bitmap,
  13,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  12             // Advance
};

#endif // GLYPH_O_H
