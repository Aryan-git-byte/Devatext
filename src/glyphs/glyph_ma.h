/*
 * glyph_ma.h
 * Devanagari Character 'DEVANAGARI LETTER MA' - U+092E
 */

#ifndef GLYPH_MA_H
#define GLYPH_MA_H

#include "../Devanagari.h"

// Bitmap: 9x8 pixels
const uint8_t PROGMEM ma_bitmap[] = {
  0x7F, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x3E, 0x00, 
  0x22, 0x00, 0x02, 0x00, 0x02, 0x00
};

const Glyph PROGMEM glyph_ma = {
  0x092E,        // U+092E: DEVANAGARI LETTER MA
  ma_bitmap,
  9,             // Width
  8,             // Height
  -1,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_MA_H
