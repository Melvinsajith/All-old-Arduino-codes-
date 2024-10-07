int speedpin = 5;
int dir1 = 4;
int dir2= 3;
int  mspeed = 125;
int tiltpin = 2;
int tiltval;

void setup() {
  // put your setup code here, to run once:
pinMode(speedpin,OUTPUT);
pinMode(tiltpin,INPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
digitalWrite(tiltpin,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltval = digitalRead(tiltpin);
Serial.println(tiltval);
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedpin,255);
delay(100);
analogWrite(speedpin,100);
delay(5000);
}
