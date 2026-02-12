/*
 * glyph_ka.h
 * Devanagari Character 'DEVANAGARI LETTER KA' - U+0915
 */

#ifndef GLYPH_KA_H
#define GLYPH_KA_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM ka_bitmap[] = {
  0xFF, 0xC0, 0x04, 0x00, 0x3C, 0x00, 0x47, 0x00, 0x44, 0x80, 
  0x4C, 0x80, 0x34, 0x80, 0x04, 0x00
};

const Glyph PROGMEM glyph_ka = {
  0x0915,        // U+0915: DEVANAGARI LETTER KA
  ka_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_KA_H
