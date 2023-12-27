#include<LiquidCrystal.h>

//LCD 
LiquidCrystal lcd(12,11,5,4,3,2);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.home();
  lcd.print("Hello World");
  lcd.setCursor(0,1);
  lcd.print("16X2 LCD");
}

void loop() {
  // put your main code here, to run repeatedly:

}
