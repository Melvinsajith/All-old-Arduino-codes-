#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
String C;
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600
int pos = 0;    // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(60);

}


void loop() {

while(Serial.available())
  {
    

   C = Serial.read();

    
    if (C[0]=='1'){
    Serial.println(C[0]);

      Serial.println("max1");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos = C.toInt();
      pwm.setPWM(1, 0, 600);
               // tell servo to go to position in variable 'pos'

    }
     if (C[0]=='2'){
    Serial.println(C[0]);

      Serial.println("max2");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
pwm.setPWM(1, 0, 100);
    }

}
}
