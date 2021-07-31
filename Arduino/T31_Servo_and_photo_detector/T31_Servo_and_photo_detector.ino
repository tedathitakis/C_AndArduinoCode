#include<Servo.h>
int servoPin = 9;
int photoPin = 5;
int photoIn = A5;

float servoPos = 0;
float photoVal = -1;

Servo servo;

int dt = 500;
void setup() {
  // put your setup code here, to run once:
  servo.attach(servoPin);
  Serial.begin(9600);
  pinMode(photoPin,OUTPUT);
  pinMode(photoIn,INPUT);
  digitalWrite(photoPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoIn);
  //Serial.println(servoPos);
  servoPos = (int) (photoVal*(160./1023.));
  servo.write(servoPos);
  delay(dt);
}
