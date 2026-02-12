/*
 * glyph_pha.h
 * Devanagari Character 'DEVANAGARI LETTER PHA' - U+092B
 */

#ifndef GLYPH_PHA_H
#define GLYPH_PHA_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM pha_bitmap[] = {
  0xFF, 0xC0, 0x44, 0x00, 0x44, 0x00, 0x47, 0x00, 0x44, 0x80, 
  0x3C, 0x80, 0x04, 0x80, 0x04, 0x00
};

const Glyph PROGMEM glyph_pha = {
  0x092B,        // U+092B: DEVANAGARI LETTER PHA
  pha_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_PHA_H
