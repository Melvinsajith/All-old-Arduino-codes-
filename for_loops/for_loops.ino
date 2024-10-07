int pin1 = 6;
int pin2 = 9;
int DT = 500;
int DTY = 500; 
int yblink = 5;
int redblink = 3;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j =1;j<=yblink;j=j+1) {
digitalWrite(pin1,HIGH);
delay(DTY);
digitalWrite(pin1,LOW);
delay(DTY);
   }
  for(j =1;j<=redblink;j=j+1){
digitalWrite(pin2,HIGH);
delay(DT);
digitalWrite(pin1,LOW);
delay(DT);
)



}
