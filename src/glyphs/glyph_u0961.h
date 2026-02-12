/*
 * glyph_u0961.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0961
 */

#ifndef GLYPH_U0961_H
#define GLYPH_U0961_H

#include "../Devanagari.h"

// Bitmap: 10x11 pixels
const uint8_t PROGMEM u0961_bitmap[] = {
  0x7F, 0x80, 0x02, 0x00, 0x32, 0x00, 0x49, 0x00, 0x49, 0x00, 
  0x43, 0x00, 0x22, 0x00, 0x10, 0x00, 0x03, 0x00, 0x02, 0x00, 
  0x01, 0x80
};

const Glyph PROGMEM glyph_u0961 = {
  0x0961,        // U+0961: DEVANAGARI CHARACTER
  u0961_bitmap,
  10,             // Width
  11,             // Height
  0,             // xOffset
  -8,             // yOffset
  9             // Advance
};

#endif // GLYPH_U0961_H
