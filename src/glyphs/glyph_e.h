/*
 * glyph_e.h
 * Devanagari Character 'DEVANAGARI LETTER E' - U+090F
 */

#ifndef GLYPH_E_H
#define GLYPH_E_H

#include "../Devanagari.h"

// Bitmap: 8x11 pixels
const uint8_t PROGMEM e_bitmap[] = {
  0xFE, 0x44, 0x44, 0x44, 0x4C, 0x60, 0x30, 0x08, 0x04, 0x04, 
  0x00
};

const Glyph PROGMEM glyph_e = {
  0x090F,        // U+090F: DEVANAGARI LETTER E
  e_bitmap,
  8,             // Width
  11,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_E_H
