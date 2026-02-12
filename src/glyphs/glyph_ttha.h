/*
 * glyph_ttha.h
 * Devanagari Character 'DEVANAGARI LETTER TTHA' - U+0920
 */

#ifndef GLYPH_TTHA_H
#define GLYPH_TTHA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM ttha_bitmap[] = {
  0xFF, 0x08, 0x08, 0x3C, 0x66, 0x42, 0x42, 0x3C
};

const Glyph PROGMEM glyph_ttha = {
  0x0920,        // U+0920: DEVANAGARI LETTER TTHA
  ttha_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_TTHA_H
