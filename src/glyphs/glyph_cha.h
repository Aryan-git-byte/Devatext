/*
 * glyph_cha.h
 * Devanagari Character 'DEVANAGARI LETTER CHA' - U+091B
 */

#ifndef GLYPH_CHA_H
#define GLYPH_CHA_H

#include "../Devanagari.h"

// Bitmap: 9x8 pixels
const uint8_t PROGMEM cha_bitmap[] = {
  0xFF, 0x80, 0x06, 0x00, 0x6E, 0x00, 0x09, 0x00, 0x65, 0x00, 
  0x41, 0x00, 0x42, 0x00, 0x3C, 0x00
};

const Glyph PROGMEM glyph_cha = {
  0x091B,        // U+091B: DEVANAGARI LETTER CHA
  cha_bitmap,
  9,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_CHA_H
