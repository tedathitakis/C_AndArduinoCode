int readPin = A2;
double V2 = 0;
int delayTime = 1000;
double readVal = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);//serial moniter buad rate (rate at which bits will flow)  baud up faster bit rate buad rate down slower bitrate
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin); //0-1023 value because 10bit number return
  V2 = readVal*5.0/1024.0;
  Serial.println(V2);
  delay(delayTime);
}
