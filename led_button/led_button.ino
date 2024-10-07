int LEDSTATE = 0;
int ledPIN = 5;
int buttonpin = 6;
int buttonNEw;
int buttonold = 1;
#include <Servo.h>
Servo myservo;
Servo myservo2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPIN,OUTPUT);
pinMode(buttonpin,INPUT);
 myservo.attach(7); 

}

void loop() {
  // put your main code here, to run repeatedly:
buttonNEw =digitalRead(buttonpin);
if (buttonold==0 && buttonNEw ==1){
  if (LEDSTATE ==0){
    digitalWrite(ledPIN, HIGH);
    LEDSTATE = 1;
    myservo.write(90); 
  }
  else{
        digitalWrite(ledPIN, LOW);
        LEDSTATE = 0;
        myservo.write(0);

  }
  }
buttonold = buttonNEw;
delay(100);

}
