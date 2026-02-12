/*
 * glyph_digit_three.h
 * Devanagari Character 'DEVANAGARI DIGIT THREE' - U+0969
 */

#ifndef GLYPH_DIGIT_THREE_H
#define GLYPH_DIGIT_THREE_H

#include "../Devanagari.h"

// Bitmap: 4x9 pixels
const uint8_t PROGMEM digit_three_bitmap[] = {
  0x60, 0x10, 0x10, 0x60, 0x10, 0x10, 0x60, 0x20, 0x10
};

const Glyph PROGMEM glyph_digit_three = {
  0x0969,        // U+0969: DEVANAGARI DIGIT THREE
  digit_three_bitmap,
  4,             // Width
  9,             // Height
  1,             // xOffset
  -8,             // yOffset
  6             // Advance
};

#endif // GLYPH_DIGIT_THREE_H
