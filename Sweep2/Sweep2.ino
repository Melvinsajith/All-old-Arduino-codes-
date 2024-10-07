

#include <Servo.h>

Servo myservo;
Servo myservo2;  // create servo object to control a servo
// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(7); 
  myservo2.attach(6);// attaches the servo on pin 9 to the servo object
}

void loop() {
  
    myservo.write(0);    
    delay(2000);                       // waits 15ms for the servo to reach the position
  
 // goes from 180 degrees to 0 degrees
    myservo.write(90);   
    delay(2000);                       // waits 15ms for the servo to reach the position
  }
