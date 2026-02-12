/*
 * glyph_u0960.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0960
 */

#ifndef GLYPH_U0960_H
#define GLYPH_U0960_H

#include "../Devanagari.h"

// Bitmap: 12x10 pixels
const uint8_t PROGMEM u0960_bitmap[] = {
  0xFF, 0xE0, 0x04, 0x00, 0x74, 0x80, 0x0D, 0x80, 0x0F, 0x80, 
  0x15, 0x80, 0x25, 0x00, 0x05, 0xC0, 0x00, 0x80, 0x00, 0xE0
};

const Glyph PROGMEM glyph_u0960 = {
  0x0960,        // U+0960: DEVANAGARI CHARACTER
  u0960_bitmap,
  12,             // Width
  10,             // Height
  0,             // xOffset
  -8,             // yOffset
  11             // Advance
};

#endif // GLYPH_U0960_H
