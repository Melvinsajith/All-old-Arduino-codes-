#include<Servo.h>
int xpin = A0;
int ypin = A1;
int spin =2;
int xval;
int yval;
int sval;
int dt = 500;
int dt = 100;
int readpin = A3;
int servopin =10;
int servopos;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);
digitalWrite(spin,HIGH);
Mservo.attach(servopin);
}
void loop() {
  // put your main code here, to run repeatedly:
xval = analogRead(xpin);
yval = analogRead(ypin);
sval = analogRead(spin);
delay(dt);
Serial.print(" X value = ");
Serial.print(xval);
Serial.print(" y value = ");
Serial.print(yval);
Serial.print(" switch state is");
Serial.println(sval);
if (xval = 0){
  servopos = 180;
  Mservo.write(servopos);
}
}
