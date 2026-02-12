/*
 * glyph_visarga.h
 * Devanagari Character 'DEVANAGARI SIGN VISARGA' - U+0903
 */

#ifndef GLYPH_VISARGA_H
#define GLYPH_VISARGA_H

#include "../Devanagari.h"

// Bitmap: 3x8 pixels
const uint8_t PROGMEM visarga_bitmap[] = {
  0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00
};

const Glyph PROGMEM glyph_visarga = {
  0x0903,        // U+0903: DEVANAGARI SIGN VISARGA
  visarga_bitmap,
  3,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  3             // Advance
};

#endif // GLYPH_VISARGA_H
