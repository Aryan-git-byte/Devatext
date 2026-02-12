/*
 * glyph_u094e.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+094E
 */

#ifndef GLYPH_U094E_H
#define GLYPH_U094E_H

#include "../Devanagari.h"

// Bitmap: 3x8 pixels
const uint8_t PROGMEM u094e_bitmap[] = {
  0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
};

const Glyph PROGMEM glyph_u094e = {
  0x094E,        // U+094E: DEVANAGARI CHARACTER
  u094e_bitmap,
  3,             // Width
  8,             // Height
  1,             // xOffset
  -8,             // yOffset
  3             // Advance
};

#endif // GLYPH_U094E_H
