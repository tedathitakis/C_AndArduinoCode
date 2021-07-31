int pinRed = 3;
int pinButtonRead = 11;
int buttonRead;
int buttonNew;//used for button release
int buttonOld = 0;// "    "    "       "
int dt = 100;
bool on = true; //used in push in method
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(pinRed,OUTPUT);
  pinMode(pinButtonRead,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead = digitalRead(pinButtonRead);
  //Serial.println(ButtonRead);
  /*if (ButtonRead == 0 && on == false){ //push in method
    digitalWrite(pinRed,HIGH);
    on = true;
  }else if (ButtonRead == 0){
    digitalWrite(pinRed,LOW);
    on = false;
  }
  
  while(ButtonRead == 0){
    ButtonRead = digitalRead(pinButtonRead);
  }*/
  buttonNew = buttonRead; // button release method
  if (buttonNew == 1 && buttonOld == 0){
    if (on == false){
      digitalWrite(pinRed,HIGH);
      on = true;
    }else{
      digitalWrite(pinRed,LOW);
      on =false;
    }
  }
  buttonOld = buttonNew;
}
