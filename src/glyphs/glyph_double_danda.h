/*
 * glyph_double_danda.h
 * Devanagari Character 'DEVANAGARI DOUBLE DANDA' - U+0965
 */

#ifndef GLYPH_DOUBLE_DANDA_H
#define GLYPH_DOUBLE_DANDA_H

#include "../Devanagari.h"

// Bitmap: 4x8 pixels
const uint8_t PROGMEM double_danda_bitmap[] = {
  0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90
};

const Glyph PROGMEM glyph_double_danda = {
  0x0965,        // U+0965: DEVANAGARI DOUBLE DANDA
  double_danda_bitmap,
  4,             // Width
  8,             // Height
  2,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_DOUBLE_DANDA_H
