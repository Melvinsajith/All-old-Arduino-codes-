#include <Servo.h>
String C;
Servo myservo;  
int pos = 0;    // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object


}


void loop() {

while(Serial.available())
  {
    

   C = Serial.read();
 Serial.println(C);
  }
}
