int buzz = 8;
int ir = A3;
int irval;

void setup() {
  // put your setup code here, to run once:
pinMode(buzz,OUTPUT);
pinMode(ir,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
irval=analogRead(ir);
Serial.println(irval);
delay(500);
if(irval<=200){
  digitalWrite(buzz,HIGH);
delay(2000);
}
if(irval>200){
  digitalWrite(buzz,LOW);
}
}
