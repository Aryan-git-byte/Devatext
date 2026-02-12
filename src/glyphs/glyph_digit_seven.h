/*
 * glyph_digit_seven.h
 * Devanagari Character 'DEVANAGARI DIGIT SEVEN' - U+096D
 */

#ifndef GLYPH_DIGIT_SEVEN_H
#define GLYPH_DIGIT_SEVEN_H

#include "../Devanagari.h"

// Bitmap: 6x7 pixels
const uint8_t PROGMEM digit_seven_bitmap[] = {
  0x80, 0xB8, 0xAC, 0x5C, 0x44, 0x64, 0x38
};

const Glyph PROGMEM glyph_digit_seven = {
  0x096D,        // U+096D: DEVANAGARI DIGIT SEVEN
  digit_seven_bitmap,
  6,             // Width
  7,             // Height
  0,             // xOffset
  -8,             // yOffset
  6             // Advance
};

#endif // GLYPH_DIGIT_SEVEN_H
