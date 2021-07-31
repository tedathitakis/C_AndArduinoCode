int pinR = 9;
int pinY = 6;
int blinkT = 200;
void setup() {
  // put your setup code here, to run once:
pinMode(pinR,OUTPUT);
pinMode(pinY,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i<3; i++){
  digitalWrite(pinY,HIGH);
  delay(blinkT);
  digitalWrite(pinY,LOW);
  delay(blinkT);
}
for(int i = 0; i< 5; i++){
  digitalWrite(pinR,HIGH);
  delay(blinkT);
  digitalWrite(pinR,LOW);
  delay(blinkT);
}
}
