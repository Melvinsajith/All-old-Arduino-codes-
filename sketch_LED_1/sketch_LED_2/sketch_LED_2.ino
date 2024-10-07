int pin1 = 13;
int pin2 = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pin1,HIGH);
delay(1000);
digitalWrite(pin2,HIGH);
delay(1000);



}
