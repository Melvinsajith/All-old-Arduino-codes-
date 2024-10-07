int myvoltpin = A2;
int readval;
float V2;
int dt  =250;
int buzzpin = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myvoltpin,INPUT);
pinMode(buzzpin,OUTPUT);
}

void loop() {
  
readval = analogRead(myvoltpin);

Serial.print("potentiometer voltage is = ");
Serial.println(V2);
V2 = readval;
while (V2>1000){
 digitalWrite(buzzpin,HIGH);
}
if(V2<950){
 digitalWrite(buzzpin,LOW);
}

}
