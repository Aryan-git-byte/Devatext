/*
 * glyph_digit_zero.h
 * Devanagari Character 'DEVANAGARI DIGIT ZERO' - U+0966
 */

#ifndef GLYPH_DIGIT_ZERO_H
#define GLYPH_DIGIT_ZERO_H

#include "../Devanagari.h"

// Bitmap: 5x6 pixels
const uint8_t PROGMEM digit_zero_bitmap[] = {
  0x00, 0x70, 0x88, 0x88, 0x88, 0x70
};

const Glyph PROGMEM glyph_digit_zero = {
  0x0966,        // U+0966: DEVANAGARI DIGIT ZERO
  digit_zero_bitmap,
  5,             // Width
  6,             // Height
  1,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_DIGIT_ZERO_H
