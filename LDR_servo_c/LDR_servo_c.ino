#include<Servo.h>
int dt = 100;
int servopin = 8;
int readpin = A3;
int ldrval;
int servopos =90;
Servo Mservo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readpin,INPUT);
Mservo.attach(servopin);

}
void loop() {
ldrval = analogRead(readpin);
Serial.println(ldrval);
delay(dt);
if (ldrval >=600){
Mservo.write(servopos);
}
if (ldrval >=900){
Mservo.write(0);
}
if (ldrval >=1000){
Mservo.write(180);
}
}
