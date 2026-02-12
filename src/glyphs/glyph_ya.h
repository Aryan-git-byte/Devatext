/*
 * glyph_ya.h
 * Devanagari Character 'DEVANAGARI LETTER YA' - U+092F
 */

#ifndef GLYPH_YA_H
#define GLYPH_YA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM ya_bitmap[] = {
  0xFE, 0x24, 0x24, 0x44, 0x44, 0x3C, 0x04, 0x04
};

const Glyph PROGMEM glyph_ya = {
  0x092F,        // U+092F: DEVANAGARI LETTER YA
  ya_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_YA_H
