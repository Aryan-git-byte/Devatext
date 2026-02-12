/*
 * glyph_digit_four.h
 * Devanagari Character 'DEVANAGARI DIGIT FOUR' - U+096A
 */

#ifndef GLYPH_DIGIT_FOUR_H
#define GLYPH_DIGIT_FOUR_H

#include "../Devanagari.h"

// Bitmap: 5x9 pixels
const uint8_t PROGMEM digit_four_bitmap[] = {
  0x00, 0x80, 0xC8, 0x48, 0x30, 0x30, 0x18, 0x18, 0x30
};

const Glyph PROGMEM glyph_digit_four = {
  0x096A,        // U+096A: DEVANAGARI DIGIT FOUR
  digit_four_bitmap,
  5,             // Width
  9,             // Height
  1,             // xOffset
  -9,             // yOffset
  7             // Advance
};

#endif // GLYPH_DIGIT_FOUR_H
