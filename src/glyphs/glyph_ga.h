/*
 * glyph_ga.h
 * Devanagari Character 'DEVANAGARI LETTER GA' - U+0917
 */

#ifndef GLYPH_GA_H
#define GLYPH_GA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM ga_bitmap[] = {
  0x7E, 0x24, 0x24, 0x64, 0x64, 0x24, 0x04, 0x04
};

const Glyph PROGMEM glyph_ga = {
  0x0917,        // U+0917: DEVANAGARI LETTER GA
  ga_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_GA_H
