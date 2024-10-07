int ledpin =13;
int state = 0;
int flag = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
digitalWrite(ledpin,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  state = Serial.read();
  flag =0;
}
 if(state=='0'){
  digitalWrite(ledpin,LOW);
 }
 if(flag==0){
  Serial.println("LED:off");
  flag =1;
 }
else if(state=='1'){
  digitalWrite(ledpin,HIGH);
  Serial.println("LED:ON");
  flag =1;
}
}
