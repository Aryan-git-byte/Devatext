/*
 * glyph_sign_ai.h
 * Devanagari Character 'DEVANAGARI VOWEL SIGN AI' - U+0948
 */

#ifndef GLYPH_SIGN_AI_H
#define GLYPH_SIGN_AI_H

#include "../Devanagari.h"

// Bitmap: 5x4 pixels
const uint8_t PROGMEM sign_ai_bitmap[] = {
  0x60, 0x10, 0x78, 0x00
};

const Glyph PROGMEM glyph_sign_ai = {
  0x0948,        // U+0948: DEVANAGARI VOWEL SIGN AI
  sign_ai_bitmap,
  5,             // Width
  4,             // Height
  -6,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_SIGN_AI_H
