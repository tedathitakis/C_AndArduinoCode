float potVal;
int delayTime = 100;
int potPin = A5;
int LEDPin = 6;
float LEDVal = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin,INPUT);
pinMode(LEDPin,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  while(potVal>1000){
    digitalWrite(LEDPin,HIGH);
    potVal=analogRead(potPin);
    Serial.println(potVal);
    delay(delayTime);
  }
  digitalWrite(LEDPin,LOW);
}
