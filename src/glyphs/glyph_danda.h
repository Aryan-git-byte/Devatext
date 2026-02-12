/*
 * glyph_danda.h
 * Devanagari Character 'DEVANAGARI DANDA' - U+0964
 */

#ifndef GLYPH_DANDA_H
#define GLYPH_DANDA_H

#include "../Devanagari.h"

// Bitmap: 1x8 pixels
const uint8_t PROGMEM danda_bitmap[] = {
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
};

const Glyph PROGMEM glyph_danda = {
  0x0964,        // U+0964: DEVANAGARI DANDA
  danda_bitmap,
  1,             // Width
  8,             // Height
  2,             // xOffset
  -8,             // yOffset
  5             // Advance
};

#endif // GLYPH_DANDA_H
