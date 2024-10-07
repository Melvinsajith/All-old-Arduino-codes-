int latchpin = 11;
int clockpin = 9;
int datapin = 12;
int dt = 250;
byte LED1S = 0b00000000;
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
delay(dt);
LED1S = LED1S+1;
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED1S);
digitalWrite(latchpin,HIGH);
delay(dt);
Serial.print(num);
Serial.print("  ");
Serial.println(LED1S,BIN);
num = num + 1;
if (num == 257){
  num = 1;
}
if (LED1S== 11111111){
  LED1S = 00000000;
}
} 
