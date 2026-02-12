/*
 * glyph_u097e.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+097E
 */

#ifndef GLYPH_U097E_H
#define GLYPH_U097E_H

#include "../Devanagari.h"

// Bitmap: 9x8 pixels
const uint8_t PROGMEM u097e_bitmap[] = {
  0x7F, 0x80, 0x02, 0x00, 0x0E, 0x00, 0x10, 0x00, 0x6E, 0x00, 
  0x31, 0x00, 0x0E, 0x00, 0x3F, 0x00
};

const Glyph PROGMEM glyph_u097e = {
  0x097E,        // U+097E: DEVANAGARI CHARACTER
  u097e_bitmap,
  9,             // Width
  8,             // Height
  -1,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_U097E_H
