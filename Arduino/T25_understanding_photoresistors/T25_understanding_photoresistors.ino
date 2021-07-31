int lightPin = A4;
int lightVal;
int dt = 300;
int pinRed = 12;
int pinGreen = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPin,INPUT);
pinMode(pinRed,OUTPUT);
pinMode(pinGreen,OUTPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  if(lightVal > 400){
    digitalWrite(pinRed,HIGH);
    digitalWrite(pinGreen,LOW);
  }else{
    digitalWrite(pinRed,LOW);
    digitalWrite(pinGreen,HIGH);
  }
  delay(dt);
  
}
