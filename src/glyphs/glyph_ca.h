/*
 * glyph_ca.h
 * Devanagari Character 'DEVANAGARI LETTER CA' - U+091A
 */

#ifndef GLYPH_CA_H
#define GLYPH_CA_H

#include "../Devanagari.h"

// Bitmap: 9x8 pixels
const uint8_t PROGMEM ca_bitmap[] = {
  0xFF, 0x00, 0x02, 0x00, 0x7A, 0x00, 0x22, 0x00, 0x22, 0x00, 
  0x26, 0x00, 0x1A, 0x00, 0x02, 0x00
};

const Glyph PROGMEM glyph_ca = {
  0x091A,        // U+091A: DEVANAGARI LETTER CA
  ca_bitmap,
  9,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_CA_H
