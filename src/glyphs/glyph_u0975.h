/*
 * glyph_u0975.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0975
 */

#ifndef GLYPH_U0975_H
#define GLYPH_U0975_H

#include "../Devanagari.h"

// Bitmap: 13x12 pixels
const uint8_t PROGMEM u0975_bitmap[] = {
  0x00, 0x40, 0x00, 0x60, 0x01, 0xD0, 0x00, 0x30, 0x3B, 0xF8, 
  0x09, 0x20, 0x19, 0x20, 0x4F, 0x20, 0x41, 0x20, 0x21, 0x20, 
  0x39, 0x20, 0x01, 0x20
};

const Glyph PROGMEM glyph_u0975 = {
  0x0975,        // U+0975: DEVANAGARI CHARACTER
  u0975_bitmap,
  13,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  13             // Advance
};

#endif // GLYPH_U0975_H
