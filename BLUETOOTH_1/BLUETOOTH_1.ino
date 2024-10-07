char Incoming_value = 0;
int led = 8;

void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);

}

void loop() {
 if(Serial.available()>0)
 {
  Incoming_value = Serial.read();
  Serial.println(Incoming_value);
  if(Incoming_value =='1'){
    digitalWrite(led,HIGH);
  }
  else(Incoming_value =='0');{
    digitalWrite(led,LOW);
  }
 }

}
