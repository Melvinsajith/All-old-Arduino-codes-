int ledstate = 0;
int ledpin = 8;
int buttonpin = 12;
int buttonnew;
int buttonold= 1;
int dt = 100;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonnew = digitalRead(buttonpin);
Serial.println(buttonnew);
if (buttonold == 0 && buttonnew ==1){
  if (ledstate ==0){
  digitalWrite(ledpin,HIGH);
  ledstate = 1;
  }
  if(ledstate ==1){
  digitalWrite(ledpin,LOW);
  ledstate ==0;
  }
}
buttonold = buttonnew;
delay(dt);
}
