/*
 * glyph_au.h
 * Devanagari Character 'DEVANAGARI LETTER AU' - U+0914
 */

#ifndef GLYPH_AU_H
#define GLYPH_AU_H

#include "../Devanagari.h"

// Bitmap: 13x12 pixels
const uint8_t PROGMEM au_bitmap[] = {
  0x01, 0x80, 0x00, 0x40, 0x01, 0xE0, 0x00, 0x60, 0x3B, 0xF0, 
  0x09, 0x20, 0x19, 0x20, 0x4F, 0x20, 0x41, 0x20, 0x21, 0x20, 
  0x39, 0x20, 0x01, 0x20
};

const Glyph PROGMEM glyph_au = {
  0x0914,        // U+0914: DEVANAGARI LETTER AU
  au_bitmap,
  13,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  12             // Advance
};

#endif // GLYPH_AU_H
