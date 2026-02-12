# Devatext

Lightweight **Devanagari text rendering engine** for Arduino SSD1306 OLED displays.

Devatext provides native UTF-8 rendering of Hindi/Sanskrit text using PROGMEM glyph storage and a minimal bare-metal display pipeline — designed for small AVR boards with limited memory.

---

## ✨ Features

* UTF-8 Devanagari rendering
* Supports Hindi & Sanskrit glyphs
* Matra handling
* Optimized PROGMEM bitmap storage
* No external graphics libraries required
* Lightweight for ATmega328-class boards
* Direct SSD1306 control path

---

## 📦 Installation

### Arduino Library Manager

After acceptance into Library Manager:

1. Open Arduino IDE
2. Go to **Sketch → Include Library → Manage Libraries**
3. Search:

```
Devatext
```

4. Install

---

### Manual Installation

```
git clone https://github.com/Aryan-git-byte/Devatext
```

Move into:

```
Documents/Arduino/libraries/
```

Restart Arduino IDE.

---

## 🚀 Quick Start

```cpp
#include <Devatext.h>

Devanagari display(devanagariDefaultGlyphs, DEVANAGARI_GLYPH_COUNT);

void setup() {
  display.begin();
  display.print("नमस्ते");
}

void loop() {}
```

See full example:

```
examples/HelloDevanagari
```

---

## 🧠 How It Works

Devatext converts UTF-8 Devanagari input into glyph indices and renders them from PROGMEM bitmaps directly onto SSD1306 buffers.

Pipeline:

1. UTF-8 decode
2. Glyph lookup
3. Matra positioning
4. Bitmap fetch from flash
5. Pixel write to display buffer

This avoids heavy graphics stacks and keeps RAM usage minimal.

---

## 🖥 Supported Hardware

### Tested

* Arduino Uno
* Arduino Nano

### Display

* SSD1306 OLED (I2C)

### Architecture

* AVR

---

## 📁 Library Structure

```
Devatext/
 ├── src/
 ├── examples/
 ├── library.properties
 ├── LICENSE
 └── README.md
```

---

## ⚠ Limitations

* Designed primarily for AVR boards
* SSD1306 focused rendering path
* Glyph set currently limited to bundled tables

---

## 🛣 Roadmap Ideas

* ESP32 / ARM support
* Larger glyph coverage
* Faster glyph lookup structures
* Layout shaping improvements
* Additional display drivers

---

## 🤝 Contributing

Contributions welcome — especially:

* Glyph expansions
* Performance optimizations
* Cross-architecture support
* Rendering improvements

Open an issue or submit a PR.

---

## 📜 License

MIT License — see LICENSE file.

---

## 👤 Author

Aryan Kumar
Embedded systems learner and builder focused on practical electronics and display systems.

GitHub
https://github.com/Aryan-git-byte

---

## ⭐ Why Devatext Exists

Most Arduino display stacks focus on Latin rendering.
Devatext explores native Indic rendering on resource-constrained microcontrollers — bringing regional language display capability to embedded systems.

---

## ✅ Summary

Devatext is a lightweight, hardware-focused Devanagari rendering engine designed for small Arduino boards. It prioritizes memory efficiency, direct control, and simplicity while enabling meaningful native language display in embedded projects.

---
