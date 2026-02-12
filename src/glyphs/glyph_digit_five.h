/*
 * glyph_digit_five.h
 * Devanagari Character 'DEVANAGARI DIGIT FIVE' - U+096B
 */

#ifndef GLYPH_DIGIT_FIVE_H
#define GLYPH_DIGIT_FIVE_H

#include "../Devanagari.h"

// Bitmap: 6x10 pixels
const uint8_t PROGMEM digit_five_bitmap[] = {
  0x00, 0x80, 0x80, 0x80, 0x90, 0x70, 0x10, 0x08, 0x08, 0x00
};

const Glyph PROGMEM glyph_digit_five = {
  0x096B,        // U+096B: DEVANAGARI DIGIT FIVE
  digit_five_bitmap,
  6,             // Width
  10,             // Height
  1,             // xOffset
  -9,             // yOffset
  6             // Advance
};

#endif // GLYPH_DIGIT_FIVE_H
