#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int LM_35=A0;
int input_T=0;
float temp=0;
int a = 58;
int i=0;
int b = 59;
int c = 05;
int d = 1;
String e;
int buzzer=6;


void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.begin(16, 2);
lcd.print(c);
lcd.print(":");
lcd.print(b);
lcd.print(":");
lcd.print(a);
lcd.print(" ");
lcd.print(e);
lcd.setCursor(11,0);
lcd.print(":)");
lcd.print("A@6");
input_T=analogRead(LM_35);
temp=((5.0 * input_T * 100.0)/1024)-96;
lcd.setCursor(0,1);
lcd.print("Zndgi Gulzar Hai");
delay(1000);
a = a + 1;
if (a > 59){
   a = 0; 
   b = b + 1; 
 }   
if (b > 59){
  b = 0;
  c = c + 1;
 }
if (c > 11){
  b = 0;
  c = 0;
  d = d + 1;
  if (d == 2){ 
    d = 0;
  }
 }
  if (d == 0){
    e = "PM";
  }
  if (d == 1){
    e = "AM";
  }
 if(a==0&&c==6&&d==1) {
  while(i<10)
  {
   digitalWrite(buzzer,HIGH);
   delay(500);
   digitalWrite(buzzer,LOW);
   delay(500);
   i++;
  }
  a=a+9;
}
}
