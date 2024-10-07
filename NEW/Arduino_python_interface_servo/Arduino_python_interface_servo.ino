
#include <Servo.h>
String C;
Servo myservo;  
int pos = 0;    // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object


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

      myservo.write(pos);              // tell servo to go to position in variable 'pos'

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
