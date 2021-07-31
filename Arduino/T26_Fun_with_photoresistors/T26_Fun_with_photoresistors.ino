int pinBuzz = 11;
int lightPin = A1;
float lightIn;
float toneDelay;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinBuzz,OUTPUT);
  pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightIn = analogRead(lightPin);
  toneDelay = 60.+lightIn*(9940.0/1023.0);
  digitalWrite(pinBuzz,HIGH);
  delayMicroseconds(toneDelay);
  digitalWrite(pinBuzz,LOW);
  delayMicroseconds(toneDelay);
}
