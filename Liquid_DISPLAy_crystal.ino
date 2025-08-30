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
