#include<LiquidCrystal.h>
LiquidCrystal G(12,11,5,4,3,2);
void setup() {
  G.begin(16,2);
  G.home();
  G.print("hello world");
  G.setCursor(0,1);
  G.print("16*2 LcD");
}

void loop() {
  
}
