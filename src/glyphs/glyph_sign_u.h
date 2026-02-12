/*
 * glyph_sign_u.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN U' - U+0941
 */

#ifndef GLYPH_SIGN_U_H
#define GLYPH_SIGN_U_H

#include "../Devanagari.h"

// Bitmap: 6x4 pixels
const uint8_t PROGMEM sign_u_bitmap[] = {
  0x18, 0x84, 0x44, 0x38
};

const Glyph PROGMEM glyph_sign_u = {
  0x0941,        // U+0941: DEVANAGARI VOWEL SIGN U
  sign_u_bitmap,
  6,             // Width
  4,             // Height
  -6,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_SIGN_U_H
