/*
 * glyph_ii.h
 * Devanagari Character 'DEVANAGARI LETTER II' - U+0908
 */

#ifndef GLYPH_II_H
#define GLYPH_II_H

#include "../Devanagari.h"

// Bitmap: 6x13 pixels
const uint8_t PROGMEM ii_bitmap[] = {
  0x0C, 0x10, 0x10, 0x10, 0xFC, 0x38, 0x40, 0x40, 0x30, 0x08, 
  0x08, 0x30, 0x08
};

const Glyph PROGMEM glyph_ii = {
  0x0908,        // U+0908: DEVANAGARI LETTER II
  ii_bitmap,
  6,             // Width
  13,             // Height
  0,             // xOffset
  -12,             // yOffset
  6             // Advance
};

#endif // GLYPH_II_H
