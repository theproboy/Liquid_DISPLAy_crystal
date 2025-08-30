# Liquid_DISPLAy_crystal
# LCD Display Project using Arduino Uno

## 📌 Overview
This project demonstrates how to interface a **16x2 LCD display** with an **Arduino Uno** to display custom text and sensor readings.  
It serves as a beginner-friendly example for students and enthusiasts who want to understand microcontroller-based display systems.

---

## ⚙️ Features
- Displays custom text messages on LCD  
- Supports dynamic values (e.g., sensor readings, counters, messages)  
- Simple wiring with Arduino Uno  
- Can be extended for smart home or IoT applications  

---

## 🛠️ Components Used
- Arduino Uno  
- 16x2 LCD Display  
- 10k Potentiometer (for contrast adjustment)  
- Breadboard & Jumper Wires  
- Resistors (220Ω for LCD backlight)  

---

## 🔌 Circuit Diagram
![LCD Arduino Circuit](https://www.circuitbasics.com/wp-content/uploads/2015/01/Arduino-LCD-Circuit-Diagram.png)  
*(You can replace this link with your own circuit image if you have one)*  

---

## 📝 Code
```cpp
#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);  // Set up the LCD's number of columns and rows
  lcd.print("Hello, World!"); // Print message
}

void loop() {
  lcd.setCursor(0, 1);  // Move to second row
  lcd.print("Arduino + LCD");
  delay(1000);
}

