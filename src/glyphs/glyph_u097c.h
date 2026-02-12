/*
 * glyph_u097c.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+097C
 */

#ifndef GLYPH_U097C_H
#define GLYPH_U097C_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM u097c_bitmap[] = {
  0x7F, 0x80, 0x01, 0x00, 0x4F, 0x00, 0x45, 0x00, 0x25, 0x00, 
  0x19, 0x00, 0x01, 0x00, 0x3F, 0x00
};

const Glyph PROGMEM glyph_u097c = {
  0x097C,        // U+097C: DEVANAGARI CHARACTER
  u097c_bitmap,
  10,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_U097C_H
