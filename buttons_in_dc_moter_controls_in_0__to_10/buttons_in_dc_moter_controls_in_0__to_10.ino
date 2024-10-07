int buttonpin = 2;
int buttonpin2 = 6;
int buttonval;
int buttonval2;
int dt = 100;
int speedpin = 5;
int dir1 = 4;
int dir2= 3;
int  mspeed;
int c;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonpin,INPUT);
pinMode(buttonpin2,INPUT);
digitalWrite(buttonpin,HIGH);
digitalWrite(buttonpin2,HIGH);
pinMode(speedpin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
buttonval = digitalRead(buttonpin);
buttonval2 = digitalRead(buttonpin2);
delay(dt);
Serial.println(buttonval);
}
Serial.println(c);
delay(dt);


if (c == 1){
  mspeed =225;
   analogWrite(speedpin,mspeed);
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
}
if (buttonval == 0){
  mspeed =0;
   analogWrite(speedpin,mspeed);
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
}
if (buttonval2 == 1){
  mspeed =225;
   analogWrite(speedpin,mspeed);
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
}
}
