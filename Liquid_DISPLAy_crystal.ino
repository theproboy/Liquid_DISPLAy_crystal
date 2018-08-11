#include<LiquidCrystal.h>
LiquidCrystal MyLCD(12, 11, 5, 4, 3, 2);
void setup() {
  MyLCD.begin(16, 2);
  MyLCD.home();
  MyLCD.print("Hi");
  
  MyLCD.setCursor(1,1);
  MyLCD.print("I Love You !");
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
