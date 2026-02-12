/*
 * glyph_bha.h
 * Devanagari Character 'DEVANAGARI LETTER BHA' - U+092D
 */

#ifndef GLYPH_BHA_H
#define GLYPH_BHA_H

#include "../Devanagari.h"

// Bitmap: 9x8 pixels
const uint8_t PROGMEM bha_bitmap[] = {
  0xEF, 0x00, 0xA2, 0x00, 0x72, 0x00, 0x12, 0x00, 0x3E, 0x00, 
  0x22, 0x00, 0x02, 0x00, 0x02, 0x00
};

const Glyph PROGMEM glyph_bha = {
  0x092D,        // U+092D: DEVANAGARI LETTER BHA
  bha_bitmap,
  9,             // Width
  8,             // Height
  1,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_BHA_H
