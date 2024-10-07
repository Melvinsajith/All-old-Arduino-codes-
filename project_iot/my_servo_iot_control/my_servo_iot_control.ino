#include <Servo.h>


String C;
String stringOne;
String stringTwo;
 


void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);



}


void loop() {

while(Serial.available())
  {
    

   C = Serial.readString();
         Serial.println(C);
        C=  String(C);

stringOne = "1234";
        if (stringTwo.equals(stringOne)){

      Serial.println("max1");
      Serial.println(C);
        digitalWrite(9, 1);  
        delay(1000);
    }
else{
        digitalWrite(9, 0); 

      

    }

}
}
