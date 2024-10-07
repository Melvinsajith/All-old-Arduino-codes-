int pin1 = 13;
int pin2 = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin2,HIGH);
delay(500);
digitalWrite(pin2,LOW);
delay(100);
}
