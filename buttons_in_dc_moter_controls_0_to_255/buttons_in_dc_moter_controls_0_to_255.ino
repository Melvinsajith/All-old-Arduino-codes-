int speedPin=5;
int dir1=4;
int dir2=3;
int bp1 =6;
int bp2 = 2;
int b1val;
int b2val; 
int mspeed =0;
int dt = 500;
void setup() {
  // put your s etup code here, to run once:
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(bp1,INPUT);
pinMode(bp1,INPUT);
digitalWrite(bp1,HIGH);
digitalWrite(bp2,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
b1val=digitalRead(bp1);
b2val=digitalRead(bp2);
Serial.print( "m speed = ");
Serial.println(mspeed);

if (b1val ==0){
  mspeed=mspeed-10;
  delay(dt);
}
if (b2val ==0){
  mspeed =mspeed+10;
  delay(dt);
}
if (mspeed>255){
  mspeed =255;
}
if (mspeed<-255){
  mspeed =-255;
}
if (mspeed ==10){
  mspeed = 130;
}
if (mspeed ==-10){
  mspeed = -130;
}
if (mspeed==90 || mspeed == 95){
  mspeed =0;
}
if (mspeed==-90 || mspeed ==-95){
  mspeed =0;
}
if (mspeed == 0){
  analogWrite(speedPin,0);
}
if(mspeed>0){
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedPin,mspeed);
}
if(mspeed<0){
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
analogWrite(speedPin,abs(mspeed));
}
}
