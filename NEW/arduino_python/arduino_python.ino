String mydata;

#include <Servo.h>

Servo myservo;  
int pos = 0;    // variable to store the servo position

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(9);  // attaches the servo on pin 9 to the servo object

}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()==0){
  mydata = Serial.readString();
  
  Serial.println(mydata);
  if (mydata[0]=='1'){
    Serial.println(mydata[0]);

      Serial.println("max1");
      Serial.println(mydata);
      mydata.remove(0,1);
      Serial.println(mydata);
      pos = mydata.toInt();

      myservo.write(pos);              // tell servo to go to position in variable 'pos'

    }
  
}
}
