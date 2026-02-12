/*
 * glyph_sign_uu.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN UU' - U+0942
 */

#ifndef GLYPH_SIGN_UU_H
#define GLYPH_SIGN_UU_H

#include "../Devanagari.h"

// Bitmap: 6x4 pixels
const uint8_t PROGMEM sign_uu_bitmap[] = {
  0x70, 0x88, 0x84, 0x60
};

const Glyph PROGMEM glyph_sign_uu = {
  0x0942,        // U+0942: DEVANAGARI VOWEL SIGN UU
  sign_uu_bitmap,
  6,             // Width
  4,             // Height
  -4,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_SIGN_UU_H
