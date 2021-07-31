int myPin = A2;
int warnPin = 11;
double readVal;
double V2;
int dt = 300;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin,INPUT);
pinMode(warnPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(myPin);
V2 = (5.0/1023.0)*readVal;
Serial.print("Potentiometer Voltage: ");
Serial.println(V2);
if (V2 >= 4.00){
  digitalWrite(warnPin,HIGH);
}else{
  digitalWrite(warnPin,LOW);
}
delay(dt);
}
