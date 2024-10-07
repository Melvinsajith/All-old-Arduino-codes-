int ledpin = 8;
int ledstate = 0;
int buttonpin = 12;
int buttonRead;
int buttonold= 1;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);
}
void loop(){
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(buttonpin);

Serial.println(buttonRead);
delay(dt);

if (buttonold == 0 && buttonpin ==1){
  if (ledstate ==1){
  digitalWrite(ledpin,HIGH);
  ledstate ==0;
}
else{
  digitalWrite(ledpin,LOW);
  ledstate ==0;
}
} 
buttonold = buttonRead;
delay(dt);
}
