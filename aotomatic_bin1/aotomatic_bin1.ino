#include<Servo.h>
int epin = 3;
int tpin = 5;
int traveltime;
int distance;
int servo =10;
int servopos;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
pinMode(tpin,OUTPUT);
pinMode(epin,INPUT);
myservo.attach(servo);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(tpin,LOW);
delayMicroseconds(10);
digitalWrite(tpin,HIGH);
delayMicroseconds(10);
digitalWrite(tpin,LOW);
traveltime = pulseIn(epin,HIGH);
distance = ((traveltime/2)/29);
Serial.println(distance);
delay(50);

if (distance <= 7){
  servopos = 90;
  myservo.write(servopos);
  delay(2000);
}
if (distance >= 10){
  servopos = 0;
  myservo.write(servopos);
}
}
