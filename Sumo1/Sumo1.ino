int w1i1=10;
int w1i2=9;
int w2i1=5;
int w2i2=3;

void setup(){
  pinMode(w1i1, OUTPUT);
  pinMode(w1i2, OUTPUT);
  pinMode(w2i1, OUTPUT);
  pinMode(w2i2, OUTPUT);
  
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
  digitalWrite(w2i1,LOW);
  digitalWrite(w1i1,LOW);
  digitalWrite(w2i2,LOW);
  
}

void right() {
  digitalWrite(w1i2,LOW);
  digitalWrite(w2i1,LOW);
  digitalWrite(w1i1,LOW);
  digitalWrite(w2i2,HIGH);
  
}

void loop(){
  forward(); delay(2000);
  backward(); delay(2000);
  left(); delay(2000);
  right(); delay(2000);
}
