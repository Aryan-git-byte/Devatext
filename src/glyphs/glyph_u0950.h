/*
 * glyph_u0950.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0950
 */

#ifndef GLYPH_U0950_H
#define GLYPH_U0950_H

#include "../Devanagari.h"

// Bitmap: 11x11 pixels
const uint8_t PROGMEM u0950_bitmap[] = {
  0x00, 0x00, 0x02, 0x00, 0x04, 0x80, 0x03, 0x80, 0x38, 0x00, 
  0x04, 0xC0, 0x05, 0x20, 0x0B, 0x20, 0x47, 0x20, 0x24, 0xC0, 
  0x18, 0x00
};

const Glyph PROGMEM glyph_u0950 = {
  0x0950,        // U+0950: DEVANAGARI CHARACTER
  u0950_bitmap,
  11,             // Width
  11,             // Height
  0,             // xOffset
  -12,             // yOffset
  12             // Advance
};

#endif // GLYPH_U0950_H
