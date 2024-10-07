int tpin = 12;
int epin = 11;
int traveltime;
int buzz = 10;
int tdistance;
void setup() {
  // put your setup code here, to run once:
pinMode(tpin,OUTPUT);
pinMode(buzz,OUTPUT);
pinMode(epin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(tpin,LOW);
delayMicroseconds(10);
digitalWrite(tpin,HIGH);
delayMicroseconds(10);
digitalWrite(tpin,LOW);
traveltime = pulseIn(epin,HIGH);
delay(25);
tdistance =(traveltime*0.034/2);
Serial.println(tdistance); 
if (tdistance<=100){
digitalWrite(buzz,HIGH);
delay(1000);
}
if (tdistance>100){
digitalWrite(buzz,LOW);
} 
}
