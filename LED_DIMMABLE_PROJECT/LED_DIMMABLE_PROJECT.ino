int potpin = A1;
int ledpin = 6;
int potval;
float ledval;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potval = analogRead(potpin);
ledval=(255./1033.)*potval;
analogWrite(ledpin,ledval);
Serial.println(ledval); 
}
