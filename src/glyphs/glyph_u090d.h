/*
 * glyph_u090d.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+090D
 */

#ifndef GLYPH_U090D_H
#define GLYPH_U090D_H

#include "../Devanagari.h"

// Bitmap: 8x15 pixels
const uint8_t PROGMEM u090d_bitmap[] = {
  0x00, 0x24, 0x1C, 0x00, 0xFE, 0x44, 0x44, 0x44, 0x4C, 0x60, 
  0x10, 0x0C, 0x04, 0x04, 0x00
};

const Glyph PROGMEM glyph_u090d = {
  0x090D,        // U+090D: DEVANAGARI CHARACTER
  u090d_bitmap,
  8,             // Width
  15,             // Height
  0,             // xOffset
  -12,             // yOffset
  7             // Advance
};

#endif // GLYPH_U090D_H
