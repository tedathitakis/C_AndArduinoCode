int myNumb;
int buzzPin = 3;
int buzzTime = 10;
int buzzTime2 = 1;
int voltIn = A1;
float V2;
String msg = "Please Input Your Number";
int dt = 2000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(voltIn,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  V2 = analogRead(voltIn);
  buzzTime2 = V2*(9940.0/1023)+60;
    digitalWrite(buzzPin,HIGH);
    delayMicroseconds(buzzTime2);
    digitalWrite(buzzPin,LOW);
    delayMicroseconds(buzzTime2);
  }
