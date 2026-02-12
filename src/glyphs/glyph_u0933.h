/*
 * glyph_u0933.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0933
 */

#ifndef GLYPH_U0933_H
#define GLYPH_U0933_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM u0933_bitmap[] = {
  0xFF, 0xC0, 0x01, 0x00, 0x39, 0x00, 0x4C, 0x80, 0x44, 0x80, 
  0x4C, 0x80, 0x3B, 0x00, 0x00, 0x00
};

const Glyph PROGMEM glyph_u0933 = {
  0x0933,        // U+0933: DEVANAGARI CHARACTER
  u0933_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_U0933_H
