/*
 * glyph_nna.h
 * Devanagari Character 'DEVANAGARI LETTER NNA' - U+0923
 */

#ifndef GLYPH_NNA_H
#define GLYPH_NNA_H

#include "../Devanagari.h"

// Bitmap: 10x8 pixels
const uint8_t PROGMEM nna_bitmap[] = {
  0x7F, 0x80, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x29, 0x00, 
  0x39, 0x00, 0x01, 0x00, 0x01, 0x00
};

const Glyph PROGMEM glyph_nna = {
  0x0923,        // U+0923: DEVANAGARI LETTER NNA
  nna_bitmap,
  10,             // Width
  8,             // Height
  -1,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_NNA_H
