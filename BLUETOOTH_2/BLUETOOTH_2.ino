char Val;
#include<SoftwareSerial.h>
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  Val = Serial.read();
  Serial.println(Val);
  String value=Serial.readStringUntil('\n');
  if(Val=="N"){
    digitalWrite(13,HIGH);
 
}
if (Val=="O"){
  digitalWrite(13,LOW);
}
}
}
