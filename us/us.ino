// WHEELS
int w1i1=10;
int w1i2=9;
int w2i1=5;
int w2i2=3;

void setup(){
  pinMode(w1i1, OUTPUT);
  pinMode(w1i2, OUTPUT);
  pinMode(w2i1, OUTPUT);
  pinMode(w2i2, OUTPUT);
  Serial.begin(9600);
  
}

void initial() {
  digitalWrite(w1i2,LOW);
  digitalWrite(w2i1,LOW);
  digitalWrite(w1i1,LOW);
  digitalWrite(w2i2,LOW);
  
}

void forward() {
  digitalWrite(w1i2,HIGH);
  digitalWrite(w2i1,HIGH);
  digitalWrite(w1i1,LOW);
  digitalWrite(w2i2,LOW);
  
}

void backward() {
  digitalWrite(w1i2,LOW);
  digitalWrite(w2i1,LOW);
  digitalWrite(w1i1,HIGH);
  digitalWrite(w2i2,HIGH);
  
}

void left() {
  digitalWrite(w1i2,HIGH);
  digitalWrite(w2i1,HIGH);
  digitalWrite(w1i1,LOW);
  digitalWrite(w2i2,LOW);
  
}

void right() {
  digitalWrite(w1i2,LOW);
  digitalWrite(w2i1,LOW);
  digitalWrite(w1i1,HIGH);
  digitalWrite(w2i2,HIGH);
  
}


//ULTRASONIC SENSOR
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


void loop() {
  if (distance<20)
  {
    forward();
    delay(1000);
  }
  else 
  {
    left();
  }
}
