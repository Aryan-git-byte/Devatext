/*
 * glyph_u0959.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0959
 */

#ifndef GLYPH_U0959_H
#define GLYPH_U0959_H

#include "../Devanagari.h"

// Bitmap: 11x8 pixels
const uint8_t PROGMEM u0959_bitmap[] = {
  0xFF, 0xC0, 0x10, 0x80, 0x17, 0x80, 0x74, 0x80, 0x64, 0x80, 
  0x27, 0x80, 0x10, 0x80, 0x4F, 0x80
};

const Glyph PROGMEM glyph_u0959 = {
  0x0959,        // U+0959: DEVANAGARI CHARACTER
  u0959_bitmap,
  11,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_U0959_H
