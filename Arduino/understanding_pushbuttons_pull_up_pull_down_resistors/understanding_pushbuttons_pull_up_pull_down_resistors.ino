int pinRed = 3;
int pinButtonRead = 11;
int ButtonRead;
int dt = 300;
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(pinRed,OUTPUT);
  pinMode(pinButtonRead,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ButtonRead = digitalRead(pinButtonRead);
  //Serial.println(ButtonRead);
  if (ButtonRead == 1){
    digitalWrite(pinRed,HIGH);
  }else{
    digitalWrite(pinRed,LOW);
  }
  //delay(dt);
}
