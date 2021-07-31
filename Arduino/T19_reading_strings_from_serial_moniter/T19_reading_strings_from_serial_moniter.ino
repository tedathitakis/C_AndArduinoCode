int pinBlue = 4;
int pinGreen = 6;
int pinRed = 7;
String myColour = "0";
String msg = "Choose a colour: ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinRed,OUTPUT);
pinMode(pinGreen,OUTPUT);
pinMode(pinBlue,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){
    
  }
  myColour = Serial.readString();
  Serial.println(myColour);
  if (myColour.equals("red")){
    Serial.println("reed");
    digitalWrite(pinRed,HIGH);
    digitalWrite(pinGreen,LOW);
    digitalWrite(pinBlue,LOW);
}
  if (myColour.compareTo("green")==0){
    Serial.println("green");
    digitalWrite(pinRed,LOW);
    digitalWrite(pinGreen,HIGH);
    digitalWrite(pinBlue,LOW);
}
  if (myColour.compareTo("blue")==0){
    Serial.println("blue");
    digitalWrite(pinRed,LOW);
    digitalWrite(pinGreen,LOW);
    digitalWrite(pinBlue,HIGH);
}
}
