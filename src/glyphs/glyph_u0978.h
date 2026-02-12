/*
 * glyph_u0978.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0978
 */

#ifndef GLYPH_U0978_H
#define GLYPH_U0978_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM u0978_bitmap[] = {
  0x7F, 0x20, 0x3C, 0x62, 0x62, 0x02, 0x02, 0x00
};

const Glyph PROGMEM glyph_u0978 = {
  0x0978,        // U+0978: DEVANAGARI CHARACTER
  u0978_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_U0978_H
