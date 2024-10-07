#include<Servo.h>
int epin = 5;
int tpin = 3;
int traveltime;
int distance;
int servo =10;
int servopos;
Servo Mservo;
int led = 9;

void setup() {
  // put your setup code here, to run once:
pinMode(tpin,OUTPUT);
pinMode(epin,INPUT);
Mservo.attach(servo);
Serial.begin(9600);
}

void loop() {
digitalWrite(tpin,LOW);
delayMicroseconds(10);
digitalWrite(tpin,HIGH);
delayMicroseconds(10);
digitalWrite(tpin,LOW);
traveltime = pulseIn(epin,HIGH);
distance = ((traveltime/2)/29);
Serial.println(distance);
delay(20);
if (distance >5){
  servopos=90;
  Mservo.write(servopos);
  delay(10);
}
if (distance <10){
  servopos =0;
  Mservo.write(servopos);
}
}
