int led_pin = 4;
int dit_s =250;
int dit_o =700;
int last_delay = 2000;


void setup() {
  // put your setup code here, to run once:
pinMode(led_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led_pin,HIGH);
delay(dit_s);
digitalWrite(led_pin,LOW); 
delay(dit_s);

digitalWrite(led_pin,HIGH);
delay(dit_s);
digitalWrite(led_pin,LOW); 
delay(dit_s);

digitalWrite(led_pin,HIGH);
delay(dit_s);
digitalWrite(led_pin,LOW); 
delay(dit_s);

digitalWrite(led_pin,HIGH);
delay(dit_o);
digitalWrite(led_pin,LOW); 
delay(dit_o);

digitalWrite(led_pin,HIGH);
delay(dit_o);
digitalWrite(led_pin,LOW); 
delay(dit_o);

digitalWrite(led_pin,HIGH);
delay(dit_o);
digitalWrite(led_pin,LOW); 
delay(dit_o );

digitalWrite(led_pin,HIGH);
delay(dit_s);
digitalWrite(led_pin,LOW); 
delay(dit_s);

digitalWrite(led_pin,HIGH);
delay(dit_s);
digitalWrite(led_pin,LOW); 
delay(dit_s);

digitalWrite(led_pin,HIGH);
delay(dit_s);
digitalWrite(led_pin,LOW); 
delay(last_delay);

}
