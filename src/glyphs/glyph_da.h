/*
 * glyph_da.h
 * Devanagari Character 'DEVANAGARI LETTER DA' - U+0926
 */

#ifndef GLYPH_DA_H
#define GLYPH_DA_H

#include "../Devanagari.h"

// Bitmap: 7x9 pixels
const uint8_t PROGMEM da_bitmap[] = {
  0x7E, 0x08, 0x38, 0x60, 0x40, 0x4C, 0x3C, 0x04, 0x00
};

const Glyph PROGMEM glyph_da = {
  0x0926,        // U+0926: DEVANAGARI LETTER DA
  da_bitmap,
  7,             // Width
  9,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_DA_H
