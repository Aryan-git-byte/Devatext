/*
 * glyph_sign_i.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN I' - U+093F
 */

#ifndef GLYPH_SIGN_I_H
#define GLYPH_SIGN_I_H

#include "../Devanagari.h"

// Bitmap: 10x12 pixels
const uint8_t PROGMEM sign_i_bitmap[] = {
  0x3C, 0x00, 0x42, 0x00, 0x41, 0x00, 0x40, 0x80, 0xE0, 0x00, 
  0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 
  0x40, 0x00, 0x40, 0x00
};

const Glyph PROGMEM glyph_sign_i = {
  0x093F,        // U+093F: DEVANAGARI VOWEL SIGN I
  sign_i_bitmap,
  10,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  3             // Advance
};

#endif // GLYPH_SIGN_I_H
