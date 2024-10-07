byte mbyte = 10;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(mbyte,DEC);
Serial.print("  ");
Serial.print(mbyte,BIN);
Serial.print("  ");
Serial.println(mbyte,HEX);
mbyte = mbyte+1;
delay(dt);
}
