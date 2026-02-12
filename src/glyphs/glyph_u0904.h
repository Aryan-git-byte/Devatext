/*
 * glyph_u0904.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0904
 */

#ifndef GLYPH_U0904_H
#define GLYPH_U0904_H

#include "../Devanagari.h"

// Bitmap: 10x12 pixels
const uint8_t PROGMEM u0904_bitmap[] = {
  0x00, 0x00, 0x08, 0x00, 0x0E, 0x00, 0x01, 0x00, 0x3B, 0x80, 
  0x09, 0x00, 0x09, 0x00, 0x19, 0x00, 0x4F, 0x00, 0x41, 0x00, 
  0x39, 0x00, 0x01, 0x00
};

const Glyph PROGMEM glyph_u0904 = {
  0x0904,        // U+0904: DEVANAGARI CHARACTER
  u0904_bitmap,
  10,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  9             // Advance
};

#endif // GLYPH_U0904_H
