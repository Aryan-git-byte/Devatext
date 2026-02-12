/*
 * glyph_sha.h
 * Devanagari Character 'DEVANAGARI LETTER SHA' - U+0936
 */

#ifndef GLYPH_SHA_H
#define GLYPH_SHA_H

#include "../Devanagari.h"

// Bitmap: 9x9 pixels
const uint8_t PROGMEM sha_bitmap[] = {
  0x77, 0x00, 0x4A, 0x00, 0x2A, 0x00, 0x1A, 0x00, 0x72, 0x00, 
  0x32, 0x00, 0x12, 0x00, 0x0A, 0x00, 0x00, 0x00
};

const Glyph PROGMEM glyph_sha = {
  0x0936,        // U+0936: DEVANAGARI LETTER SHA
  sha_bitmap,
  9,             // Width
  9,             // Height
  0,             // xOffset
  -8,             // yOffset
  8             // Advance
};

#endif // GLYPH_SHA_H
