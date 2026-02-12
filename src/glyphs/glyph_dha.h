/*
 * glyph_dha.h
 * Devanagari Character 'DEVANAGARI LETTER DHA' - U+0927
 */

#ifndef GLYPH_DHA_H
#define GLYPH_DHA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM dha_bitmap[] = {
  0x6E, 0xA4, 0x84, 0x74, 0x44, 0x4C, 0x3C, 0x04
};

const Glyph PROGMEM glyph_dha = {
  0x0927,        // U+0927: DEVANAGARI LETTER DHA
  dha_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_DHA_H
