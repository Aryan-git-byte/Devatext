/*
 * glyph_digit_eight.h
 * Devanagari Character 'DEVANAGARI DIGIT EIGHT' - U+096E
 */

#ifndef GLYPH_DIGIT_EIGHT_H
#define GLYPH_DIGIT_EIGHT_H

#include "../Devanagari.h"

// Bitmap: 6x9 pixels
const uint8_t PROGMEM digit_eight_bitmap[] = {
  0x00, 0x10, 0x30, 0x20, 0x40, 0x80, 0x80, 0x88, 0x70
};

const Glyph PROGMEM glyph_digit_eight = {
  0x096E,        // U+096E: DEVANAGARI DIGIT EIGHT
  digit_eight_bitmap,
  6,             // Width
  9,             // Height
  1,             // xOffset
  -9,             // yOffset
  7             // Advance
};

#endif // GLYPH_DIGIT_EIGHT_H
