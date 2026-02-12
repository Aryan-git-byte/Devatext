/*
 * glyph_gha.h
 * Devanagari Character 'DEVANAGARI LETTER GHA' - U+0918
 */

#ifndef GLYPH_GHA_H
#define GLYPH_GHA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM gha_bitmap[] = {
  0xFE, 0x44, 0x44, 0x74, 0x44, 0x4C, 0x34, 0x04
};

const Glyph PROGMEM glyph_gha = {
  0x0918,        // U+0918: DEVANAGARI LETTER GHA
  gha_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_GHA_H
