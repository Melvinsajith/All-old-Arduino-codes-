int blinks ; 
int redpin =12;
int j;
int bt = 500;
String msg ="HOW many times do you what to blink the LED:";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redpin,OUTPUT); 
}
void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){
}
blinks = Serial.parseInt();
for (j = 1;j<=blinks;j=j+1){
  digitalWrite(redpin,HIGH);
  delay(bt);
  digitalWrite(redpin,LOW);
  delay(bt);
}
}
