/*
 * glyph_ra.h
 * Devanagari Character 'DEVANAGARI LETTER RA' - U+0930
 */

#ifndef GLYPH_RA_H
#define GLYPH_RA_H

#include "../Devanagari.h"

// Bitmap: 7x9 pixels
const uint8_t PROGMEM ra_bitmap[] = {
  0x7C, 0x08, 0x08, 0x38, 0x20, 0x30, 0x18, 0x08, 0x00
};

const Glyph PROGMEM glyph_ra = {
  0x0930,        // U+0930: DEVANAGARI LETTER RA
  ra_bitmap,
  7,             // Width
  9,             // Height
  -1,             // xOffset
  -8,             // yOffset
  5             // Advance
};

#endif // GLYPH_RA_H
