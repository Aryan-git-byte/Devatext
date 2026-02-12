/*
 * glyph_u0946.h
 * Devanagari Character 'DEVANAGARI CHARACTER' - U+0946
 */

#ifndef GLYPH_U0946_H
#define GLYPH_U0946_H

#include "../Devanagari.h"

// Bitmap: 5x5 pixels
const uint8_t PROGMEM u0946_bitmap[] = {
  0x00, 0x80, 0x70, 0x08, 0x00
};

const Glyph PROGMEM glyph_u0946 = {
  0x0946,        // U+0946: DEVANAGARI CHARACTER
  u0946_bitmap,
  5,             // Width
  5,             // Height
  -6,             // xOffset
  -12,             // yOffset
  0             // Advance
};

#endif // GLYPH_U0946_H
