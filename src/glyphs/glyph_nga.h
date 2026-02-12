/*
 * glyph_nga.h
 * Devanagari Character 'DEVANAGARI LETTER NGA' - U+0919
 */

#ifndef GLYPH_NGA_H
#define GLYPH_NGA_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM nga_bitmap[] = {
  0x7F, 0x80, 0x02, 0x00, 0x1E, 0x00, 0x10, 0x80, 0x0E, 0x00, 
  0x21, 0x00, 0x31, 0x00, 0x0E, 0x00
};

const Glyph PROGMEM glyph_nga = {
  0x0919,        // U+0919: DEVANAGARI LETTER NGA
  nga_bitmap,
  10,             // Width
  8,             // Height
  -1,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_NGA_H
