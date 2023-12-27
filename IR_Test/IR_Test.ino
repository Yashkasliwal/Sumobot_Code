//IR SENSORS
int ir1=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(ir1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(ir1)==HIGH)
  {
    digitalWrite(8,HIGH);
  }
  else 
    digitalWrite(8,LOW);
    
}
