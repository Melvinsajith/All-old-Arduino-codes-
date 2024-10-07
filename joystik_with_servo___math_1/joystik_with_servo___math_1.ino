#include<Servo.h>
Servo xservo;
Servo yservo;
int xpin = A0;
int ypin = A1;
int spin =2;
int xval;
int yval;
int sval;
int dt = 500;
int servoxpin =10;
int servoypin =11;
int buzzpin = 7;
int wvx;
int wvy;
int servopos;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);
pinMode(servoxpin,OUTPUT);
pinMode(servoypin,OUTPUT);
pinMode(buzzpin,OUTPUT);
digitalWrite(spin,HIGH);
xservo.attach(servoxpin);
yservo.attach(servoypin);
}

void loop() {
xval = analogRead(xpin);
wvx = (180./1023.)*xval;
yval = analogRead(ypin);
wvy = (180./1023.)*yval;
sval = digitalRead(spin);

xservo.write(wvx);
yservo.write(wvy);
delay(dt);
Serial.print(" X value = ");
Serial.print(xval);
Serial.print(" y value = ");
Serial.print(yval);
Serial.print(" switch state is");
Serial.println(sval);

}
