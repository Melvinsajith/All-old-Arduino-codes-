 int readpin = A3;
 float   V2 = 0;
 int readval;
 int delaytime = 500;
 void setup() {
  // put your setup code here, to run 
  pinMode(readpin,INPUT);
  Serial.begin(9600);
   
}
void loop() {
  // put your main code here, to run repeatedly:
  readval = analogRead(readpin);
  V2 = (5./1023.)*readval; 
  Serial.println(V2);
  delay(delaytime);
  
  
}
