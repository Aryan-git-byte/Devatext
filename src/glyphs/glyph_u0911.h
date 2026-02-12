/*
 * glyph_u0911.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0911
 */

#ifndef GLYPH_U0911_H
#define GLYPH_U0911_H

#include "../Devanagari.h"

// Bitmap: 13x12 pixels
const uint8_t PROGMEM u0911_bitmap[] = {
  0x00, 0x00, 0x00, 0x90, 0x00, 0x60, 0x00, 0x00, 0x3B, 0xF0, 
  0x09, 0x20, 0x09, 0x20, 0x1B, 0x20, 0x45, 0x20, 0x61, 0x20, 
  0x39, 0x20, 0x01, 0x20
};

const Glyph PROGMEM glyph_u0911 = {
  0x0911,        // U+0911: DEVANAGARI CHARACTER
  u0911_bitmap,
  13,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  12             // Advance
};

#endif // GLYPH_U0911_H
