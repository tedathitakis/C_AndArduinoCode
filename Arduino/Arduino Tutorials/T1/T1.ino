int RedLED=13;
int dit = 200;
int dah = 400;
void setup() {
  // put your setup code here, to run once:
pinMode(RedLED,OUTPUT);
}
void s (){
  for(int i = 0; i < 3; i++){
    digitalWrite(13,HIGH);
    delay(dit);//milisecond
    digitalWrite(13,LOW);
    delay(dit);//milisecond
  } 
}
void o (){
  for(int i = 0; i < 3; i++){
  digitalWrite(13,HIGH);
  delay(dah);//milisecond
  digitalWrite(13,LOW);
  delay(dah);//milisecond
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  s();
  o();
  s();
  delay(1200);
}
