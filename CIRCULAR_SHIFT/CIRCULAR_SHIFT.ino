int latchpin = 11;
int clockpin = 9;
int datapin = 12;
int dt = 1000;
byte LED1S = 0b10101010;
byte LED2S = 0b01010101;
int num = 1;
void setup() {
  // put your setup code here, to run once:
pinMode(latchpin,OUTPUT);
pinMode(datapin,OUTPUT);
pinMode(clockpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED1S);
digitalWrite(latchpin,HIGH);
Serial.println(LED1S,BIN);
delay(dt);
Serial.println(LED2S,BIN);
delay(dt);
}
