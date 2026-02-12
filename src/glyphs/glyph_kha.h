/*
 * glyph_kha.h
 * Devanagari Character 'DEVANAGARI LETTER KHA' - U+0916
 */

#ifndef GLYPH_KHA_H
#define GLYPH_KHA_H

#include "../Devanagari.h"

// Bitmap: 11x8 pixels
const uint8_t PROGMEM kha_bitmap[] = {
  0xFF, 0xC0, 0x10, 0x80, 0x17, 0x80, 0x74, 0x80, 0x64, 0x80, 
  0x27, 0x80, 0x10, 0x80, 0x0F, 0x80
};

const Glyph PROGMEM glyph_kha = {
  0x0916,        // U+0916: DEVANAGARI LETTER KHA
  kha_bitmap,
  11,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_KHA_H
