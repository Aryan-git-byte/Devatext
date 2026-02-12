/*
 * glyph_u0972.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0972
 */

#ifndef GLYPH_U0972_H
#define GLYPH_U0972_H

#include "../Devanagari.h"

// Bitmap: 10x12 pixels
const uint8_t PROGMEM u0972_bitmap[] = {
  0x00, 0x00, 0x04, 0x80, 0x03, 0x80, 0x00, 0x00, 0x3B, 0x80, 
  0x09, 0x00, 0x09, 0x00, 0x1B, 0x00, 0x45, 0x00, 0x61, 0x00, 
  0x39, 0x00, 0x01, 0x00
};

const Glyph PROGMEM glyph_u0972 = {
  0x0972,        // U+0972: DEVANAGARI CHARACTER
  u0972_bitmap,
  10,             // Width
  12,             // Height
  0,             // xOffset
  -12,             // yOffset
  9             // Advance
};

#endif // GLYPH_U0972_H
