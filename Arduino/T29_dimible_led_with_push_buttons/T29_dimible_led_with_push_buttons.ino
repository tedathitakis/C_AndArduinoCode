int pinRed = 3;
int brightness = 125;

//int pinDimButtonPower = 7;
int pinDimButtonIn = 6;

//int pinBrightenButtonPower = 10;
int pinBrightenButtonIn = 9;

int brightenVal = 1;
int dimVal = 1;

int dt = 1;
void setup() {
  // put your setup code here, to run once:
pinMode(pinRed,OUTPUT);

//pinMode(pinDimButtonPower,OUTPUT);//create a power line instead
pinMode(pinDimButtonIn,INPUT); 

//pinMode(pinBrightenButtonPower,OUTPUT);//create a power line instead
pinMode(pinBrightenButtonIn,INPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  brightenVal = digitalRead(pinBrightenButtonIn);
  dimVal = digitalRead(pinDimButtonIn);
 //Serial.print("b: ");
 //Serial.println(brightenVal);
 //Serial.print("d: ");
 //Serial.println(dimVal);

 
 if(brightenVal == 0 && brightness != 255){
  brightness++;
 }else if (dimVal == 0 && brightness != 0){
    brightness--;
  }
  analogWrite(pinRed,brightness);
  delay(dt);
 }
