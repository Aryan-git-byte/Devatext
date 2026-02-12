/*
 * glyph_ddha.h
 * Devanagari Character 'DEVANAGARI LETTER DDHA' - U+0922
 */

#ifndef GLYPH_DDHA_H
#define GLYPH_DDHA_H

#include "../Devanagari.h"

// Bitmap: 7x8 pixels
const uint8_t PROGMEM ddha_bitmap[] = {
  0x7E, 0x08, 0x38, 0x60, 0x48, 0x50, 0x50, 0x38
};

const Glyph PROGMEM glyph_ddha = {
  0x0922,        // U+0922: DEVANAGARI LETTER DDHA
  ddha_bitmap,
  7,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_DDHA_H
