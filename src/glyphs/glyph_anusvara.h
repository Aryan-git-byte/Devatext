/*
 * glyph_anusvara.h
 * Devanagari Character 'DEVANAGARI SIGN ANUSVARA' - U+0902
 */

#ifndef GLYPH_ANUSVARA_H
#define GLYPH_ANUSVARA_H

#include "../Devanagari.h"

// Bitmap: 3x2 pixels
const uint8_t PROGMEM anusvara_bitmap[] = {
  0x40, 0x00
};

const Glyph PROGMEM glyph_anusvara = {
  0x0902,        // U+0902: DEVANAGARI SIGN ANUSVARA
  anusvara_bitmap,
  3,             // Width
  2,             // Height
  -3,             // xOffset
  -10,             // yOffset
  0             // Advance
};

#endif // GLYPH_ANUSVARA_H
