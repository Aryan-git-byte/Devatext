/*
 * glyph_u093b.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+093B
 */

#ifndef GLYPH_U093B_H
#define GLYPH_U093B_H

#include "../Devanagari.h"

// Bitmap: 5x12 pixels
const uint8_t PROGMEM u093b_bitmap[] = {
  0x00, 0x00, 0x20, 0x20, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 
  0x20, 0x20
};

const Glyph PROGMEM glyph_u093b = {
  0x093B,        // U+093B: DEVANAGARI CHARACTER
  u093b_bitmap,
  5,             // Width
  12,             // Height
  -1,             // xOffset
  -12,             // yOffset
  3             // Advance
};

#endif // GLYPH_U093B_H
