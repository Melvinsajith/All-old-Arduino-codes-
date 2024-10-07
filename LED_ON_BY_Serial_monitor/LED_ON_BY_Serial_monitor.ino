String colour;
String msg ="which colour LED you want to glow red,green or yellow";
String msg2 = "LED IS ON";
int redpin = 6;
int greenpin = 3;
int yellowpin =2;
int dt= 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redpin,OUTPUT);
pinMode(greenpin,OUTPUT);
pinMode(yellowpin ,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}
colour = Serial.readString();
if (colour == "red"){
  digitalWrite(redpin,HIGH);
  digitalWrite(greenpin,LOW);
  digitalWrite(yellowpin,LOW); 
}

if (colour == "green"){
  digitalWrite(greenpin,HIGH);
  digitalWrite(yellowpin,LOW);
  digitalWrite(redpin,LOW);
}
if (colour == "yellow"){
  digitalWrite(yellowpin,HIGH);
  digitalWrite(redpin,LOW);
  digitalWrite(greenpin,LOW);
}
Serial.println(msg2);
}
