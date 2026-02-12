/*
 * glyph_na.h
 * Devanagari Character 'DEVANAGARI LETTER NA' - U+0928
 */

#ifndef GLYPH_NA_H
#define GLYPH_NA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM na_bitmap[] = {
  0xFE, 0x04, 0x04, 0x7C, 0x64, 0x04, 0x04, 0x04
};

const Glyph PROGMEM glyph_na = {
  0x0928,        // U+0928: DEVANAGARI LETTER NA
  na_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_NA_H
