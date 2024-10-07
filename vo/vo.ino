int LEDState=0;
int LEDPin=8;
int buttonPin=7;
int buttonNew;
int buttonOld=1;
int dt=100;

int LEDState1=0;
int LEDPin1=2;
int buttonPin1=3;
int buttonNew1;
int buttonOld1=1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);
pinMode(LEDPin1, OUTPUT);
pinMode(buttonPin1, INPUT);

}
 
void loop() {
buttonNew=digitalRead(buttonPin);
if(buttonOld==0 && buttonNew==1){
  if (LEDState==0){
    digitalWrite(LEDPin,HIGH);
    LEDState=1;
  }
  else{
    digitalWrite(LEDPin, LOW);
    LEDState=0;
  }

buttonNew1=digitalRead(buttonPin1);
if(buttonOld1==0 && buttonNew1==1){
  if (LEDState1==0){
    digitalWrite(LEDPin1,HIGH);
    LEDState1=1;
  }
  else{
    digitalWrite(LEDPin1, LOW);
    LEDState1=0;
  }

  
}

buttonOld1=buttonNew1;

buttonOld=buttonNew;
delay(dt);
}
}
