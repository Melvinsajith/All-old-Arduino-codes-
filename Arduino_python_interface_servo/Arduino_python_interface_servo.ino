

String C;
int pulselength;
 
int pos = 0;    // variable to store the servo position
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    // attaches the servo on pin 9 to the servo object


}


void loop() {

while(Serial.available())
  {
    

   C = Serial.readString();

    
    if (C[0]=='1'){
    Serial.println(C[0]);

      Serial.println("max1");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos = C.toInt();
pulselength = map(pos, 0, 180, SERVOMIN, SERVOMAX);
                    // tell servo to go to position in variable 'pos'
   Serial.println(pulselength);
    }
     if (C[0]=='2'){
    Serial.println(C[0]);

      Serial.println("max2");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);

    }

}
}
