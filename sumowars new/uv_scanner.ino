int trigpin=1;
int echopin=2;
int t,distance;
int ultrasonic(){
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin,LOW);
  t=pulseIn(echopin,HIGH);
  distance=(t/58.2);
  return distance; 
 
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

}
