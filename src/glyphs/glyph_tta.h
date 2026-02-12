/*
 * glyph_tta.h
 * Devanagari Character 'DEVANAGARI LETTER TTA' - U+091F
 */

#ifndef GLYPH_TTA_H
#define GLYPH_TTA_H

#include "../Devanagari.h"

// Bitmap: 7x8 pixels
const uint8_t PROGMEM tta_bitmap[] = {
  0x7E, 0x08, 0x08, 0x38, 0x60, 0x40, 0x40, 0x3C
};

const Glyph PROGMEM glyph_tta = {
  0x091F,        // U+091F: DEVANAGARI LETTER TTA
  tta_bitmap,
  7,             // Width
  8,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_TTA_H
