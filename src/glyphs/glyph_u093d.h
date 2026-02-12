/*
 * glyph_u093d.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+093D
 */

#ifndef GLYPH_U093D_H
#define GLYPH_U093D_H

#include "../Devanagari.h"

// Bitmap: 5x7 pixels
const uint8_t PROGMEM u093d_bitmap[] = {
  0x38, 0x00, 0x20, 0x10, 0x08, 0x48, 0x30
};

const Glyph PROGMEM glyph_u093d = {
  0x093D,        // U+093D: DEVANAGARI CHARACTER
  u093d_bitmap,
  5,             // Width
  7,             // Height
  0,             // xOffset
  -8,             // yOffset
  6             // Advance
};

#endif // GLYPH_U093D_H
