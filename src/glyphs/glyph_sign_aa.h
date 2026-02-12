/*
 * glyph_sign_aa.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN AA' - U+093E
 */

#ifndef GLYPH_SIGN_AA_H
#define GLYPH_SIGN_AA_H

#include "../Devanagari.h"

// Bitmap: 5x8 pixels
const uint8_t PROGMEM sign_aa_bitmap[] = {
  0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20
};

const Glyph PROGMEM glyph_sign_aa = {
  0x093E,        // U+093E: DEVANAGARI VOWEL SIGN AA
  sign_aa_bitmap,
  5,             // Width
  8,             // Height
  -1,             // xOffset
  -8,             // yOffset
  3             // Advance
};

#endif // GLYPH_SIGN_AA_H
