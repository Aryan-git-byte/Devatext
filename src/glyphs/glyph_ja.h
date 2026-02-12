/*
 * glyph_ja.h
 * Devanagari Character 'DEVANAGARI LETTER JA' - U+091C
 */

#ifndef GLYPH_JA_H
#define GLYPH_JA_H

#include "../Devanagari.h"

// Bitmap: 11x8 pixels
const uint8_t PROGMEM ja_bitmap[] = {
  0x7F, 0xC0, 0x00, 0x80, 0x0F, 0x80, 0x24, 0x80, 0x24, 0x80, 
  0x14, 0x80, 0x1C, 0x80, 0x00, 0x80
};

const Glyph PROGMEM glyph_ja = {
  0x091C,        // U+091C: DEVANAGARI LETTER JA
  ja_bitmap,
  11,             // Width
  8,             // Height
  -1,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_JA_H
