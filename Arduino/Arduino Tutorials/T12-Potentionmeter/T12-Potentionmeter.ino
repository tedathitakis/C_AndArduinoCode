int myVoltPin = A2;
double readVal;
double V2;
int waitT  = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(myVoltPin,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(myVoltPin);
V2 = (5.0/1023.0)*readVal;
//digitalWrite(13,HIGH);
Serial.println(V2);
delay(waitT);

}
