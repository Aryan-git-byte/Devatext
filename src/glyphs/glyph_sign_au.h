/*
 * glyph_sign_au.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN AU' - U+094C
 */

#ifndef GLYPH_SIGN_AU_H
#define GLYPH_SIGN_AU_H

#include "../Devanagari.h"

// Bitmap: 7x12 pixels
const uint8_t PROGMEM sign_au_bitmap[] = {
  0x60, 0x10, 0x78, 0x18, 0x1C, 0x08, 0x08, 0x08, 0x08, 0x08, 
  0x08, 0x08
};

const Glyph PROGMEM glyph_sign_au = {
  0x094C,        // U+094C: DEVANAGARI VOWEL SIGN AU
  sign_au_bitmap,
  7,             // Width
  12,             // Height
  -3,             // xOffset
  -12,             // yOffset
  3             // Advance
};

#endif // GLYPH_SIGN_AU_H
