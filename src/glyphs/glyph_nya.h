/*
 * glyph_nya.h
 * Devanagari Character 'DEVANAGARI LETTER NYA' - U+091E
 */

#ifndef GLYPH_NYA_H
#define GLYPH_NYA_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM nya_bitmap[] = {
  0xFF, 0x80, 0x01, 0x00, 0x19, 0x00, 0x05, 0x00, 0x47, 0x00, 
  0x45, 0x00, 0x39, 0x00, 0x01, 0x00
};

const Glyph PROGMEM glyph_nya = {
  0x091E,        // U+091E: DEVANAGARI LETTER NYA
  nya_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_NYA_H
