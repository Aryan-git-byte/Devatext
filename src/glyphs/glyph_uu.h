/*
 * glyph_uu.h
 * Devanagari Character 'DEVANAGARI LETTER UU' - U+090A
 */

#ifndef GLYPH_UU_H
#define GLYPH_UU_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM uu_bitmap[] = {
  0xFF, 0xC0, 0x04, 0x00, 0x04, 0x00, 0x18, 0x00, 0x4F, 0x00, 
  0x44, 0x80, 0x24, 0x80, 0x18, 0x00
};

const Glyph PROGMEM glyph_uu = {
  0x090A,        // U+090A: DEVANAGARI LETTER UU
  uu_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_UU_H
