#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
char C;
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60);
}

void loop() {
  // put your main code here, to run repeatedly:
 while(Serial.available())
  {
    

   C = Serial.read();
 if (C =='1'){
  Serial.println(C);
   pwm.setPWM(1, 0, 100);
 }
 if (C =='2'){
  Serial.println(C);
   pwm.setPWM(1, 0, 400);
 }
  if (C =='3'){
  Serial.println(C);
   pwm.setPWM(5, 0, 100);
 }
 if (C =='4'){
  Serial.println(C);
   pwm.setPWM(5, 0, 400);
 }
 }
}
