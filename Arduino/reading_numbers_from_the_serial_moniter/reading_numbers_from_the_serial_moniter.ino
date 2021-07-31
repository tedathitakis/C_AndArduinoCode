int myNumber;
String msg = "How Many times do you want to blink: ";
String msg2 = "blinking :";
int pinRed = 11;
int pinL = pinRed;
int pinGreen = 9;
int pinBlue =4;
int delayT = 200;
String msg3 = "Colour: ";
String colour;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinL,OUTPUT);
pinMode(pinRed,OUTPUT);
pinMode(pinGreen,OUTPUT);
pinMode(pinBlue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){
    
  }
  myNumber=Serial.parseInt();
  Serial.print(msg2);
  Serial.println(myNumber);
  Serial.println("r");
  for(int i =0; i < myNumber; i++){
    digitalWrite(pinL,HIGH);
    delay(delayT);
    digitalWrite(pinL,LOW);
    delay(delayT);
  }

}
