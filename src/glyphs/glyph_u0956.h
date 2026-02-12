/*
 * glyph_u0956.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0956
 */

#ifndef GLYPH_U0956_H
#define GLYPH_U0956_H

#include "../Devanagari.h"

// Bitmap: 6x2 pixels
const uint8_t PROGMEM u0956_bitmap[] = {
  0x00, 0x38
};

const Glyph PROGMEM glyph_u0956 = {
  0x0956,        // U+0956: DEVANAGARI CHARACTER
  u0956_bitmap,
  6,             // Width
  2,             // Height
  -7,             // xOffset
  0,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0956_H
