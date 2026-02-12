/*
 * glyph_pa.h
 * Devanagari Character 'DEVANAGARI LETTER PA' - U+092A
 */

#ifndef GLYPH_PA_H
#define GLYPH_PA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM pa_bitmap[] = {
  0xFE, 0x44, 0x44, 0x44, 0x44, 0x3C, 0x04, 0x04
};

const Glyph PROGMEM glyph_pa = {
  0x092A,        // U+092A: DEVANAGARI LETTER PA
  pa_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_PA_H
