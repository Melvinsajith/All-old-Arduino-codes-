int lightpin = A0;
int buzzpin = 8;
int delayt;
int lighval;
void setup() {
  // put your setup code here, to run once:
pinMode(lightpin,INPUT);
pinMode(buzzpin,OUTPUT);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
lighval = analogRead(lightpin);
delayt = 1023/lighval+1;
Serial.println(delayt);
digitalWrite(buzzpin,HIGH);
delay(delayt);
digitalWrite(buzzpin,LOW);
delay(delayt);
if (lighval<5){
 digitalWrite(buzzpin,LOW);
 digitalWrite(buzzpin,LOW);
}
}
