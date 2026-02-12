/*
 * glyph_ba.h
 * Devanagari Character 'DEVANAGARI LETTER BA' - U+092C
 */

#ifndef GLYPH_BA_H
#define GLYPH_BA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM ba_bitmap[] = {
  0xFE, 0x04, 0x3C, 0x64, 0x54, 0x4C, 0x34, 0x04
};

const Glyph PROGMEM glyph_ba = {
  0x092C,        // U+092C: DEVANAGARI LETTER BA
  ba_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_BA_H
