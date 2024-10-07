int led_pin = 8;
int dit_m = 700;
int dit_o = 50;

void setup() {
  // put your setup code here, to run once:
pinMode(led_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_pin,HIGH);
delay(dit_m);
digitalWrite(led_pin,LOW); 
delay(dit_m);

digitalWrite(led_pin,HIGH);
delay(dit_o);
digitalWrite(led_pin,LOW); 
delay(100);
}
