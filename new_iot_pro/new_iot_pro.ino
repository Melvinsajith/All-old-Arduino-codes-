#include <SPI.h>
#include <RFID.h>
#define SS_PIN 10
#define RST_PIN 9
#include <LiquidCrystal_I2C.h>

RFID rfid(SS_PIN, RST_PIN);
String rfid1 = "221 152 145 102";
String rfidCardREAD;
String rfidCard;
String rfid2 = "149 57 173 172";
String rfid3 = "149 57 173 172";


#include <Servo.h>
LiquidCrystal_I2C lcd(0x3F,16,2); 
Servo myservo;
Servo myservo2;

void setup() {
  Serial.begin(9600);
  Serial.println("Starting the RFID Reader...");
  SPI.begin();
  rfid.init();
  myservo.attach(7); 
  myservo2.attach(6);

}

void loop() {
  myservo.write(0);   
  lcd.init();
lcd.clear();         
lcd.backlight();
  if (rfid.isCard()) {
    if (rfid.readCardSerial()) {
      rfidCard = String(rfid.serNum[0]) + " " + String(rfid.serNum[1]) + " " + String(rfid.serNum[2]) + " " + String(rfid.serNum[3]);
      Serial.println(rfidCard);
      rfidCardREAD = String(rfidCard);
      

      if (rfid1 == rfidCardREAD){
       
    myservo.write(90); 
    lcd.setCursor(2,1);
    lcd.print("Door open");

    delay(10000);
    
  myservo.write(0);
  lcd.setCursor(2,1);
  lcd.print("Door Closed");
   delay(1000);
     lcd.clear();
  // tell servo to go to position in variable 'pos'
      }
      else if (rfid2 == rfidCardREAD){
       
    myservo.write(90); 
    delay(10000);
  myservo.write(0);// tell servo to go to position in variable 'pos'
      }
      else{

  myservo.write(0); // tell servo to go to position in variable 'pos'
    }

      }
      else{
  myservo.write(0); // tell servo to go to position in variable 'pos'
    }
delay(1000);
    }
    rfid.halt();
  }
