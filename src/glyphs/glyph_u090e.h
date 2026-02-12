/*
 * glyph_u090e.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+090E
 */

#ifndef GLYPH_U090E_H
#define GLYPH_U090E_H

#include "../Devanagari.h"

// Bitmap: 8x15 pixels
const uint8_t PROGMEM u090e_bitmap[] = {
  0x00, 0x40, 0x38, 0x04, 0xFE, 0x44, 0x44, 0x44, 0x44, 0x48, 
  0x30, 0x08, 0x04, 0x04, 0x00
};

const Glyph PROGMEM glyph_u090e = {
  0x090E,        // U+090E: DEVANAGARI CHARACTER
  u090e_bitmap,
  8,             // Width
  15,             // Height
  0,             // xOffset
  -12,             // yOffset
  7             // Advance
};

#endif // GLYPH_U090E_H
