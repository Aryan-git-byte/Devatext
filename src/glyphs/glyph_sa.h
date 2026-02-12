/*
 * glyph_sa.h
 * Devanagari Character 'DEVANAGARI LETTER SA' - U+0938
 */

#ifndef GLYPH_SA_H
#define GLYPH_SA_H

#include "../Devanagari.h"

// Bitmap: 10x9 pixels
const uint8_t PROGMEM sa_bitmap[] = {
  0x7F, 0x80, 0x11, 0x00, 0x11, 0x00, 0x31, 0x00, 0x3F, 0x00, 
  0x31, 0x00, 0x11, 0x00, 0x09, 0x00, 0x00, 0x00
};

const Glyph PROGMEM glyph_sa = {
  0x0938,        // U+0938: DEVANAGARI LETTER SA
  sa_bitmap,
  10,             // Width
  9,             // Height
  -1,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_SA_H
