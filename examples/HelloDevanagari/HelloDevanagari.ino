#include <Wire.h>
#include <Devatext.h>

// Initialize the library using the built-in font
Devanagari display(devanagariDefaultGlyphs, DEVANAGARI_GLYPH_COUNT);

void setup() {
  Serial.begin(9600);
  
  // Initialize Hardware
  display.begin();
  
  // Clear Screen
  display.clear();
  
  // Render Text
  display.setTextSize(1);
  display.setCursor(0, 20);
  display.print("नमस्ते दुनिया"); // Namaste World
  
  display.setTextSize(2);
  display.setCursor(0, 45);
  display.print("भारत"); // Bharat
  
  display.display();
}

void loop() {
  // Do nothing
}
