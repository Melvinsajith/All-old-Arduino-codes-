#include<Servo.h>
int xpin = A0;
int ypin = A1;
int spin =2;
int xval;
int yval;
int sval;
int dt = 500;
int servo1pin =10;
int servo2pin =11;
int servopos;
Servo servo1;
Servo servo2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);
digitalWrite(spin,HIGH);
servo1.attach(servo1pin);
servo2.attach(servo2pin);
}
void loop() {
  // put your main code here, to run repeatedly:
xval = analogRead(xpin);
yval = analogRead(ypin);
sval = digitalRead(spin);
delay(dt);
Serial.print(" X value = ");
Serial.print(xval);
Serial.print(" y value = ");
Serial.print(yval);
Serial.print(" switch state is");
Serial.println(sval);
if (xval >=900){
  servopos = 180;
  servo1.write(servopos);
}

if (xval <=500){
  servopos = 50;
  servo1.write(servopos);
}
if (xval <=0){
  servopos = 0;
  servo1.write(servopos);
}
if (yval <=0){
  servopos = 180;
  servo2.write(servopos);
}
if (yval >=900){
  servopos = 0;
  servo2.write(servopos);
}
if (yval >=600){
  servopos = 50;
  servo2.write(servopos);
}
}
