/*
 * glyph_u090c.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+090C
 */

#ifndef GLYPH_U090C_H
#define GLYPH_U090C_H

#include "../Devanagari.h"

// Bitmap: 9x9 pixels
const uint8_t PROGMEM u090c_bitmap[] = {
  0x7F, 0x80, 0x02, 0x00, 0x32, 0x00, 0x49, 0x00, 0x49, 0x00, 
  0x43, 0x00, 0x26, 0x00, 0x14, 0x00, 0x03, 0x00
};

const Glyph PROGMEM glyph_u090c = {
  0x090C,        // U+090C: DEVANAGARI CHARACTER
  u090c_bitmap,
  9,             // Width
  9,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_U090C_H
