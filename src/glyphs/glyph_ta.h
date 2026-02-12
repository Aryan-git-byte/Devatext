/*
 * glyph_ta.h
 * Devanagari Character 'DEVANAGARI LETTER TA' - U+0924
 */

#ifndef GLYPH_TA_H
#define GLYPH_TA_H

#include "../Devanagari.h"

// Bitmap: 8x9 pixels
const uint8_t PROGMEM ta_bitmap[] = {
  0x7E, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x24, 0x24, 0x00
};

const Glyph PROGMEM glyph_ta = {
  0x0924,        // U+0924: DEVANAGARI LETTER TA
  ta_bitmap,
  8,             // Width
  9,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_TA_H
