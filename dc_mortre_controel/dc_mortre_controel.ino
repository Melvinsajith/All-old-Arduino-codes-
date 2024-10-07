#include<Servo.h>
int speedpin=8;
int tpin = 3;
int epin = 5;
int traveltime;
int tdistance;
int dir1=12;
int dir2=4;
int speedpin2=6;
int dir3=9;
int dir4=10;
int m1speed=255;
int m2speed=150;
int dt =2000;
int servopos;
int servo1pin =11;
Servo servo1;
void setup() {
  // put your setup code here, to run once:
pinMode(tpin,OUTPUT);
pinMode(epin,INPUT);
pinMode(speedpin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(speedpin2,OUTPUT);
pinMode(dir3,OUTPUT);
pinMode(dir4,OUTPUT);
servo1.attach(servo1pin);
Serial.begin(9600);
servopos =90;
servo1.write(servopos);
}

void loop() {
  
digitalWrite(tpin,LOW);
delayMicroseconds(10);
digitalWrite(tpin,HIGH);
delayMicroseconds(10);
digitalWrite(tpin,LOW);
traveltime = pulseIn(epin,HIGH);
delay(25);
tdistance =(traveltime*0.034/2);
Serial.println(tdistance);
delay(25);
//servopos = 90;
 // servo1.write(servopos);
//digitalWrite(dir1,HIGH);
//digitalWrite(dir2,LOW);
//analogWrite(speedpin,m1speed);

//digitalWrite(dir3,HIGH);
//digitalWrite(dir4,LOW);
//analogWrite(speedpin2,m2speed);
if (tdistance>=20){
  servopos=90;
  servo1.write(servopos);
  delay(50);
  analogWrite(speedpin,m1speed);
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  
}
if (tdistance<=20&&servopos==90){
  servopos = 0;
  servo1.write(servopos);
  delay(dt);
  analogWrite(speedpin,m1speed);
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,LOW);

}

if (tdistance<=17 && servopos==0){
  servopos =180;
  servo1.write(servopos);
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  delay(dt);
}
if (tdistance<=20 && servopos==180){
  servopos=90;
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,LOW);
  servo1.write(servopos);
  delay(dt);
}
}
