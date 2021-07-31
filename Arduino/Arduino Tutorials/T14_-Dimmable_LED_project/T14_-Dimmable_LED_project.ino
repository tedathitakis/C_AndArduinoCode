int potPin = A1;
int gPin = 9;
float LEDVal;
float potVal;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin,INPUT);
pinMode(gPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
LEDVal = (255.0/1023.0)*potVal;
analogWrite(gPin,LEDVal);
Serial.println(LEDVal);
}
