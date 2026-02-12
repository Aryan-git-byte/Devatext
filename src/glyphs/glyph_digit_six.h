/*
 * glyph_digit_six.h
 * Devanagari Character 'DEVANAGARI DIGIT SIX' - U+096C
 */

#ifndef GLYPH_DIGIT_SIX_H
#define GLYPH_DIGIT_SIX_H

#include "../Devanagari.h"

// Bitmap: 6x9 pixels
const uint8_t PROGMEM digit_six_bitmap[] = {
  0x60, 0x80, 0x80, 0xE0, 0x80, 0x98, 0x78, 0x08, 0x08
};

const Glyph PROGMEM glyph_digit_six = {
  0x096C,        // U+096C: DEVANAGARI DIGIT SIX
  digit_six_bitmap,
  6,             // Width
  9,             // Height
  1,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_DIGIT_SIX_H
