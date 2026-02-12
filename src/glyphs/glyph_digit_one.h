/*
 * glyph_digit_one.h
 * Devanagari Character 'DEVANAGARI DIGIT ONE' - U+0967
 */

#ifndef GLYPH_DIGIT_ONE_H
#define GLYPH_DIGIT_ONE_H

#include "../Devanagari.h"

// Bitmap: 4x10 pixels
const uint8_t PROGMEM digit_one_bitmap[] = {
  0x60, 0x10, 0x50, 0x20, 0x40, 0x60, 0x30, 0x10, 0x10, 0x00
};

const Glyph PROGMEM glyph_digit_one = {
  0x0967,        // U+0967: DEVANAGARI DIGIT ONE
  digit_one_bitmap,
  4,             // Width
  10,             // Height
  1,             // xOffset
  -8,             // yOffset
  6             // Advance
};

#endif // GLYPH_DIGIT_ONE_H
