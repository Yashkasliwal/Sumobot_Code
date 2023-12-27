#include<LiquidCrystal.h>

//LCD 
LiquidCrystal lcd(12,11,5,4,3,2);

//LDR
const int LDR=A0;
int input_val=0;
int led1=6;
int led2=7;

//TEMPERATURE SENSOR
const int LM_35=A1;
int input_T=0;
float temp=0;


void setup() {
  lcd.begin(16,2);
  lcd.home();
  Serial.begin(9600);
}

void loop() {
  input_val=analogRead(LDR);
  Serial.print("LDR value is : ");
  Serial.println(input_val);
  delay(1000);
 
  if (input_val<100)
  {
      Serial.println("LED light on");
      digitalWrite(led1,HIGH);
      delay(1000);
  }

  input_T=analogRead(LM_35);
  temp=(5.0 * input_T * 100.0)/1024;
  Serial.println(temp);
  delay(1000);

  if(temp>25)
  {
    Serial.println("Fan is on");
    digitalWrite(led2,HIGH);
  }
}
