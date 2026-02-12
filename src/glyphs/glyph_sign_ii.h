/*
 * glyph_sign_ii.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN II' - U+0940
 */

#ifndef GLYPH_SIGN_II_H
#define GLYPH_SIGN_II_H

#include "../Devanagari.h"

// Bitmap: 7x12 pixels
const uint8_t PROGMEM sign_ii_bitmap[] = {
  0x60, 0x90, 0x80, 0x88, 0x1C, 0x08, 0x08, 0x08, 0x08, 0x08, 
  0x08, 0x08
};

const Glyph PROGMEM glyph_sign_ii = {
  0x0940,        // U+0940: DEVANAGARI VOWEL SIGN II
  sign_ii_bitmap,
  7,             // Width
  12,             // Height
  -3,             // xOffset
  -12,             // yOffset
  3             // Advance
};

#endif // GLYPH_SIGN_II_H
