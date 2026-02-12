/*
 * glyph_jha.h
 * Devanagari Character 'DEVANAGARI LETTER JHA' - U+091D
 */

#ifndef GLYPH_JHA_H
#define GLYPH_JHA_H

#include "../Devanagari.h"

// Bitmap: 10x10 pixels
const uint8_t PROGMEM jha_bitmap[] = {
  0xFF, 0x80, 0x09, 0x00, 0x39, 0x00, 0x41, 0x00, 0x31, 0x00, 
  0x0F, 0x00, 0x09, 0x00, 0x39, 0x00, 0x18, 0x00, 0x00, 0x00
};

const Glyph PROGMEM glyph_jha = {
  0x091D,        // U+091D: DEVANAGARI LETTER JHA
  jha_bitmap,
  10,             // Width
  10,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_JHA_H
