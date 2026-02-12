/*
 * glyph_a.h
 * Devanagari Character 'DEVANAGARI LETTER A' - U+0905
 */

#ifndef GLYPH_A_H
#define GLYPH_A_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM a_bitmap[] = {
  0x3B, 0x80, 0x09, 0x00, 0x09, 0x00, 0x19, 0x00, 0x4F, 0x00, 
  0x61, 0x00, 0x39, 0x00, 0x01, 0x00
};

const Glyph PROGMEM glyph_a = {
  0x0905,        // U+0905: DEVANAGARI LETTER A
  a_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_A_H
