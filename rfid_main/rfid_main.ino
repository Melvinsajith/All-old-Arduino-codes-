#include <SPI.h>

const int buzzer = 5;
#include <RFID.h>
#define SS_PIN 10
#define RST_PIN 9
RFID rfid(SS_PIN, RST_PIN);
String rfid1 = "221 152 145 102";
String rfidCardREAD;
String rfidCard;
String rfid2 = "149 57 173 172";
String rfid3 = "157 80 172 103";
String rfid4 = "149 57 173 172";


#include <Servo.h>

Servo myservo;

void setup() {
    pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  Serial.begin(9600);
  Serial.println("Starting the RFID Reader...");
  SPI.begin();
  rfid.init();
  myservo.attach(7); 
  pinMode(6, OUTPUT);

}

void loop() {
  myservo.write(0);   
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)

  if (rfid.isCard()) {
    if (rfid.readCardSerial()) {
      rfidCard = String(rfid.serNum[0]) + " " + String(rfid.serNum[1]) + " " + String(rfid.serNum[2]) + " " + String(rfid.serNum[3]);
      Serial.println(rfidCard);
      rfidCardREAD = String(rfidCard);
      

      if (rfid1 == rfidCardREAD){

    myservo.write(90); 
    digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)

    delay(10000);
  myservo.write(0);
    digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
// tell servo to go to position in variable 'pos'
      }
      else if (rfid2 == rfidCardREAD){
       
    myservo.write(90); 
     digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)

    delay(10000);
  myservo.write(0);
    digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
// tell servo to go to position in variable 'pos'
      }
       else if (rfid3 == rfidCardREAD){
       
    myservo.write(90); 
    digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);  
    delay(10000);
  myservo.write(0);
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)

       }
      else{
    digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);  
  myservo.write(0); // tell servo to go to position in variable 'pos'
    }

      }
      else{
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);  
  myservo.write(0); // tell servo to go to position in variable 'pos'
    }
delay(1000);
    }
    rfid.halt();
  }
