/*
 * glyph_digit_nine.h
 * Devanagari Character 'DEVANAGARI DIGIT NINE' - U+096F
 */

#ifndef GLYPH_DIGIT_NINE_H
#define GLYPH_DIGIT_NINE_H

#include "../Devanagari.h"

// Bitmap: 6x10 pixels
const uint8_t PROGMEM digit_nine_bitmap[] = {
  0x60, 0x90, 0x90, 0xF0, 0x60, 0x10, 0x08, 0x08, 0x08, 0x00
};

const Glyph PROGMEM glyph_digit_nine = {
  0x096F,        // U+096F: DEVANAGARI DIGIT NINE
  digit_nine_bitmap,
  6,             // Width
  10,             // Height
  1,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_DIGIT_NINE_H
