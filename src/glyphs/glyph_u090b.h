/*
 * glyph_u090b.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+090B
 */

#ifndef GLYPH_U090B_H
#define GLYPH_U090B_H

#include "../Devanagari.h"

// Bitmap: 11x8 pixels
const uint8_t PROGMEM u090b_bitmap[] = {
  0xFF, 0xE0, 0x04, 0x00, 0x74, 0x80, 0x0D, 0x80, 0x0F, 0x80, 
  0x15, 0x80, 0x25, 0x00, 0x04, 0xC0
};

const Glyph PROGMEM glyph_u090b = {
  0x090B,        // U+090B: DEVANAGARI CHARACTER
  u090b_bitmap,
  11,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  11             // Advance
};

#endif // GLYPH_U090B_H
