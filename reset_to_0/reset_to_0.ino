#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


#define SERVOMIN  150 
#define SERVOMAX  600

String C;

void setup() {
  // put your setup code here, to run once:
pwm.begin();
pwm.setPWMFreq(60);
}

void loop() {
  // put your main code here, to run repeatedly:
pwm.setPWM(0, 0, 150);

}
