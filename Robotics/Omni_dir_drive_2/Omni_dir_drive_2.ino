//Left Wheel
int inl1=8;
int inl2=9;
int inl3=10;
int inl4=11;
//Right wheel
int inr1=4;
int inr2=5;
int inr3=6;
int inr4=7;

void setup() {
  pinMode(inl1,OUTPUT);
  pinMode(inl2,OUTPUT);
  pinMode(inl3,OUTPUT);
  pinMode(inl4,OUTPUT);
  pinMode(inr1,OUTPUT);
  pinMode(inr2,OUTPUT);
  pinMode(inr3,OUTPUT);
  pinMode(inr4,OUTPUT); 

  digitalWrite(inl1, LOW);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, LOW);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4, LOW);
}

void loop() {
  //Forward direction
  digitalWrite(inl1, HIGH);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, HIGH);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,HIGH);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,HIGH);
  digitalWrite(inr4, LOW);
  delay(3000);
  
  //Backward direction
  digitalWrite(inl1, LOW);
  digitalWrite(inl2, HIGH);
  digitalWrite(inl3, LOW);
  digitalWrite(inl4, HIGH);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, HIGH);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4,HIGH);
  delay(3000);

  //Right direction
  digitalWrite(inl1, HIGH);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, LOW);
  digitalWrite(inl4, HIGH);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, HIGH);
  digitalWrite(inr3,HIGH);
  digitalWrite(inr4,LOW);
  delay(3000);

  //Left direction
  digitalWrite(inl1, LOW);
  digitalWrite(inl2, HIGH);
  digitalWrite(inl3, HIGH);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,HIGH);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4,HIGH);
  delay(3000);

  //Forward right
  digitalWrite(inl1, HIGH);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, LOW);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,HIGH);
  digitalWrite(inr4,LOW);
  delay(3000);

  //Forward Left
  digitalWrite(inl1, LOW);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, HIGH);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,HIGH);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4,LOW);
  delay(3000);
  
  
  //Backward Right
  digitalWrite(inl1, LOW);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, LOW);
  digitalWrite(inl4, HIGH);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, HIGH);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4,LOW);
  delay(3000);

  //Backward Left
  digitalWrite(inl1, LOW);
  digitalWrite(inl2, HIGH);
  digitalWrite(inl3, LOW);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4,HIGH);
  delay(3000);

  //Turning Right
  digitalWrite(inl1, HIGH);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, HIGH);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, HIGH);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4, HIGH);
  delay(3000);

  //Turning Left
  digitalWrite(inl1, LOW);
  digitalWrite(inl2, HIGH);
  digitalWrite(inl3, LOW);
  digitalWrite(inl4, HIGH);
  digitalWrite(inr1,HIGH);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,HIGH);
  digitalWrite(inr4, LOW);
  delay(3000);

  //Lateral Arc
  digitalWrite(inl1, LOW);
  digitalWrite(inl2, LOW);
  digitalWrite(inl3, HIGH);
  digitalWrite(inl4, LOW);
  digitalWrite(inr1,LOW);
  digitalWrite(inr2, LOW);
  digitalWrite(inr3,LOW);
  digitalWrite(inr4, HIGH);
  delay(3000);

}
