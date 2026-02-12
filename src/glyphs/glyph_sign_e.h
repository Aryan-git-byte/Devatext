/*
 * glyph_sign_e.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN E' - U+0947
 */

#ifndef GLYPH_SIGN_E_H
#define GLYPH_SIGN_E_H

#include "../Devanagari.h"

// Bitmap: 4x4 pixels
const uint8_t PROGMEM sign_e_bitmap[] = {
  0xC0, 0x20, 0x10, 0x00
};

const Glyph PROGMEM glyph_sign_e = {
  0x0947,        // U+0947: DEVANAGARI VOWEL SIGN E
  sign_e_bitmap,
  4,             // Width
  4,             // Height
  -5,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_SIGN_E_H
