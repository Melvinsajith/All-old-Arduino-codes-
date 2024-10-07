int potval;
int buzzpin = 8 ;
int dt = 250 ;
int potpin = A2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzpin,OUTPUT);
pinMode(potpin,INPUT);
}

void loop(){
potval = analogRead(potpin);
Serial.println(potval);    
while(potval >1000){
  digitalWrite(buzzpin,HIGH);
  potval =analogRead(potpin);
 
}
 digitalWrite(buzzpin,LOW);
}
