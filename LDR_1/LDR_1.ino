int lightpin = A0;
int lightval;
int dv = 500;
int rpin = 9;
int bpin = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(lightpin,INPUT);
Serial.begin(9600);
pinMode(rpin,OUTPUT);
pinMode(bpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightval = analogRead(lightpin);
Serial.println(lightval);
delay(dv);

if (lightval>300){
  digitalWrite(rpin,HIGH);
  digitalWrite(bpin,LOW);
}
if (lightval<300){
  digitalWrite(rpin,LOW);
  digitalWrite(bpin,HIGH);
}
}
