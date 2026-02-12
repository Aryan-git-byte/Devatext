/*
 * glyph_tha.h
 * Devanagari Character 'DEVANAGARI LETTER THA' - U+0925
 */

#ifndef GLYPH_THA_H
#define GLYPH_THA_H

#include "../Devanagari.h"

// Bitmap: 9x8 pixels
const uint8_t PROGMEM tha_bitmap[] = {
  0x77, 0x00, 0x52, 0x00, 0x72, 0x00, 0x12, 0x00, 0x22, 0x00, 
  0x1E, 0x00, 0x02, 0x00, 0x02, 0x00
};

const Glyph PROGMEM glyph_tha = {
  0x0925,        // U+0925: DEVANAGARI LETTER THA
  tha_bitmap,
  9,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_THA_H
