/*
 * glyph_u0951.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0951
 */

#ifndef GLYPH_U0951_H
#define GLYPH_U0951_H

#include "../Devanagari.h"

// Bitmap: 2x4 pixels
const uint8_t PROGMEM u0951_bitmap[] = {
  0x00, 0x40, 0x40, 0x00
};

const Glyph PROGMEM glyph_u0951 = {
  0x0951,        // U+0951: DEVANAGARI CHARACTER
  u0951_bitmap,
  2,             // Width
  4,             // Height
  -3,             // xOffset
  -11,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0951_H
