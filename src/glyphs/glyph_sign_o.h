/*
 * glyph_sign_o.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN O' - U+094B
 */

#ifndef GLYPH_SIGN_O_H
#define GLYPH_SIGN_O_H

#include "../Devanagari.h"

// Bitmap: 6x12 pixels
const uint8_t PROGMEM sign_o_bitmap[] = {
  0xC0, 0x20, 0x10, 0x10, 0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 
  0x10, 0x10
};

const Glyph PROGMEM glyph_sign_o = {
  0x094B,        // U+094B: DEVANAGARI VOWEL SIGN O
  sign_o_bitmap,
  6,             // Width
  12,             // Height
  -2,             // xOffset
  -12,             // yOffset
  3             // Advance
};

#endif // GLYPH_SIGN_O_H
