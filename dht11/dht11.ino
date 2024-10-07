
#include "DHT.h"

#define DHTPIN 8 // Digital pin connected to the DHT sensor

// Uncomment whatever type you're using!
#define DHTTYPE DHT11 // DHT 11
DHT dht(DHTPIN, DHTTYPE);
#define LEDPIN 9

const int buttonPin = 6;     // the number of the pushbutton pin
const int ledPin =  7;      // the number of the LED pin

// variables will change:
int buttonState = 0; 


void setup() {
Serial.begin(9600);
Serial.println(F("DHTxx test!"));
dht.begin();
pinMode(LEDPIN, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
 pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

}

void loop() {
delay(2000);

// Reading temperature or humidity takes about 250 milliseconds!
// Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
float h = dht.readHumidity();
// Read temperature as Celsius (the default)
float t = dht.readTemperature();
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {
  digitalWrite(ledPin, HIGH);
Serial.print(F("Humidity: "));
Serial.print(h);
Serial.println("%");
Serial.print(F("Temperature: "));
Serial.print(t);
Serial.println("C");

if(t>31.00)
{
digitalWrite(LEDPIN, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
Serial.println("TEMPERATURE IS very HIGH");
}
else if (29.00<t && t<31.00)
{
digitalWrite(10,HIGH);
digitalWrite(LEDPIN, LOW);
digitalWrite(11, LOW);
Serial.println("TEMPERATURE IS High");
}
else
{
digitalWrite(11,HIGH);
digitalWrite(LEDPIN, LOW);
digitalWrite(10, LOW);
Serial.println("TEMPERATURE IS LOW");
}

}
else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }

}
