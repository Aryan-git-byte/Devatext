/*
 * glyph_ha.h
 * Devanagari Character 'DEVANAGARI LETTER HA' - U+0939
 */

#ifndef GLYPH_HA_H
#define GLYPH_HA_H

#include "../Devanagari.h"

// Bitmap: 7x10 pixels
const uint8_t PROGMEM ha_bitmap[] = {
  0xFE, 0x04, 0x3C, 0x40, 0x78, 0x44, 0x44, 0x40, 0x20, 0x10
};

const Glyph PROGMEM glyph_ha = {
  0x0939,        // U+0939: DEVANAGARI LETTER HA
  ha_bitmap,
  7,             // Width
  10,             // Height
  0,             // xOffset
  -8,             // yOffset
  7             // Advance
};

#endif // GLYPH_HA_H
