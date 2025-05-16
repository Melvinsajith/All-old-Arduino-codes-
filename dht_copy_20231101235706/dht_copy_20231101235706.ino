#include <dht.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop(){
    int sensorValue = analogRead(A0);

  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(1,0);
  int chk = DHT.read11(DHT11_PIN);
  if (sensorValue <10){
  lcd.print("Water good=");
  lcd.print(sensorValue);

  }
  else if (sensorValue >100){
    lcd.print("Water Bad =");
  lcd.print(sensorValue);
  }
  lcd.setCursor(2,1);

  Serial.println(sensorValue);
  Serial.print("Water good= ");
  lcd.print("Humidity = ");

  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  lcd.print(DHT.humidity );
  delay(1000);
}