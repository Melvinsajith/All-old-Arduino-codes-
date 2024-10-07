int pin = A0;
int data1;
int rpin = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
pinMode(rpin,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
data1 = digitalRead(pin);
Serial.println(data1);
delay(10); 

 if (data1 ==0){
  digitalWrite(rpin,HIGH);
  }
 if (data1 ==1){
  digitalWrite(rpin,LOW);
}
}
