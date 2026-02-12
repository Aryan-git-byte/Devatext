/*
 * glyph_u0944.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0944
 */

#ifndef GLYPH_U0944_H
#define GLYPH_U0944_H

#include "../Devanagari.h"

// Bitmap: 5x6 pixels
const uint8_t PROGMEM u0944_bitmap[] = {
  0x00, 0xC0, 0x80, 0x60, 0x40, 0x70
};

const Glyph PROGMEM glyph_u0944 = {
  0x0944,        // U+0944: DEVANAGARI CHARACTER
  u0944_bitmap,
  5,             // Width
  6,             // Height
  -3,             // xOffset
  -1,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0944_H
