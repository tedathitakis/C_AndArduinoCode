int redPin = 3;
int greenPin = 10;
int bluePin = 5;
String myColour;
String msg = "Colour";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}
void rgbValues(int red,int green,int blue){
    analogWrite(redPin,red);
    analogWrite(greenPin,green);
    analogWrite(bluePin,blue);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){
    
  }
  myColour = Serial.readString();
  if(myColour == "red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
  }
  if(myColour == "blue"){
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,LOW);
  }
  if(myColour == "green"){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
  }
  if (myColour == "cyan"){
    rgbValues(0,255,255);
    
  }
    if (myColour == "magenta"){
      rgbValues(255,0,255);
    
  }
  if (myColour == "yellow"){
    rgbValues(255,255,0);
  }
  if(myColour == "white"){
    rgbValues(255,255,255);
  }
  if(myColour == "off"){
    rgbValues(0,0,0);
  }
  if(myColour == "orange"){
    rgbValues(255,165,0);
  }
}
