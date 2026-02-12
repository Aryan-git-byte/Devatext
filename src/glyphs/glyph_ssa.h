/*
 * glyph_ssa.h
 * Devanagari Character 'DEVANAGARI LETTER SSA' - U+0937
 */

#ifndef GLYPH_SSA_H
#define GLYPH_SSA_H

#include "../Devanagari.h"

// Bitmap: 8x8 pixels
const uint8_t PROGMEM ssa_bitmap[] = {
  0xFE, 0x64, 0x54, 0x54, 0x4C, 0x3C, 0x04, 0x04
};

const Glyph PROGMEM glyph_ssa = {
  0x0937,        // U+0937: DEVANAGARI LETTER SSA
  ssa_bitmap,
  8,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_SSA_H
