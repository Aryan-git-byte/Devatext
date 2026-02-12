/*
 * glyph_aa.h
 * Devanagari Character 'DEVANAGARI LETTER AA' - U+0906
 */

#ifndef GLYPH_AA_H
#define GLYPH_AA_H

#include "../Devanagari.h"

// Bitmap: 13x8 pixels
const uint8_t PROGMEM aa_bitmap[] = {
  0x3B, 0xF0, 0x09, 0x20, 0x09, 0x20, 0x19, 0x20, 0x4F, 0x20, 
  0x61, 0x20, 0x39, 0x20, 0x01, 0x20
};

const Glyph PROGMEM glyph_aa = {
  0x0906,        // U+0906: DEVANAGARI LETTER AA
  aa_bitmap,
  13,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  12             // Advance
};

#endif // GLYPH_AA_H
