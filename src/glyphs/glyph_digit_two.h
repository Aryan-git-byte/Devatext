/*
 * glyph_digit_two.h
 * Devanagari Character 'DEVANAGARI DIGIT TWO' - U+0968
 */

#ifndef GLYPH_DIGIT_TWO_H
#define GLYPH_DIGIT_TWO_H

#include "../Devanagari.h"

// Bitmap: 6x9 pixels
const uint8_t PROGMEM digit_two_bitmap[] = {
  0x70, 0x08, 0x08, 0x08, 0x70, 0x30, 0x18, 0x08, 0x00
};

const Glyph PROGMEM glyph_digit_two = {
  0x0968,        // U+0968: DEVANAGARI DIGIT TWO
  digit_two_bitmap,
  6,             // Width
  9,             // Height
  0,             // xOffset
  -8,             // yOffset
  6             // Advance
};

#endif // GLYPH_DIGIT_TWO_H
