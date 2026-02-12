/*
 * glyph_u0934.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0934
 */

#ifndef GLYPH_U0934_H
#define GLYPH_U0934_H

#include "../Devanagari.h"

// Bitmap: 10x10 pixels
const uint8_t PROGMEM u0934_bitmap[] = {
  0xFF, 0xC0, 0x01, 0x00, 0x39, 0x00, 0x4C, 0x80, 0x44, 0x80, 
  0x4C, 0x80, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00
};

const Glyph PROGMEM glyph_u0934 = {
  0x0934,        // U+0934: DEVANAGARI CHARACTER
  u0934_bitmap,
  10,             // Width
  10,             // Height
  0,             // xOffset
  -8,             // yOffset
  10             // Advance
};

#endif // GLYPH_U0934_H
