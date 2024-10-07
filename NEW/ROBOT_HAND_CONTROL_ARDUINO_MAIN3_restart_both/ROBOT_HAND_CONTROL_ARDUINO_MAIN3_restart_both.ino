
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define numOfValsRec 5
#define digitsPerValRec 1

#define numOfValsRec2 5
#define digitsPerValRec2 1

#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 

const int OUTPUT_PIN = 3;
int count_2 = 0;


int valsRec[numOfValsRec];

int valsRec2[numOfValsRec];

int stringLength = numOfValsRec*digitsPerValRec+1;
int stringLength2 = numOfValsRec2*digitsPerValRec2+1;

int counter = 0;
int counter2 = 0;

bool counterStart = false;
bool counterStart2 = false;

String recieivedString;
String recieivedString2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  digitalWrite(OUTPUT_PIN, HIGH);
  pinMode(OUTPUT_PIN, OUTPUT);
  pwm.begin();
  pwm.setPWMFreq(60);

}
void receieveData(){
  while(Serial.available())
  {
    char c = Serial.read();

    if (c=='L'){
      Serial.println(c);
      counterStart = true;
    }
  if (counterStart){
    if(counter < stringLength){
  recieivedString = String(recieivedString+c);
  counter ++;
  
  }
  if (counter >=stringLength){
    for(int i = 0; i<numOfValsRec; i++)
    {
      int num = (i*digitsPerValRec)+1;
      valsRec[i] = recieivedString.substring(num,num+digitsPerValRec).toInt();
      
    }
    recieivedString ="";
    counter = 0;
    counterStart = false;
    
 }
}

if (c=='R'){
      Serial.println(c);
      counterStart2 = true;
    }
  if (counterStart2){
    if(counter2 < stringLength2){
  recieivedString2 = String(recieivedString2+c);
  counter2 ++;
  
  }
  if (counter2 >=stringLength2){
    for(int i2 = 0; i2<numOfValsRec2; i2++)
    {
      int num2 = (i2*digitsPerValRec2)+1;
      valsRec2[i2] = recieivedString2.substring(num2,num2+digitsPerValRec2).toInt();
      
    }
    recieivedString2 ="";
    counter2 = 0;
    counterStart2 = false;
    
 }
}


}
}
void loop() {
 Serial.println("Arduino will be reset after");
  Serial.println(count_2);

delay(250);
receieveData();
if (valsRec[0] == 1){pwm.setPWM(0, 0, 600);
Serial.println("Lmax1");

count_2 ++;
}
else(pwm.setPWM(0, 0, 100));

if (valsRec[1] == 1){pwm.setPWM(1, 0, 600);
Serial.println("Lmax2");
}
else(pwm.setPWM(1, 0, 100));
if (valsRec[2] == 1){pwm.setPWM(2, 0, 600);
Serial.println("Lmax3");

}
else(pwm.setPWM(2, 0, 100));
if (valsRec[3] ==1){pwm.setPWM(3, 0, 600);
Serial.println("Lmax4");

}
else(pwm.setPWM(3, 0, 100));
if (valsRec[4] ==1){pwm.setPWM(4, 0, 600);
Serial.println("Lmax5");

}
else{(pwm.setPWM(4, 0, 100));
delay(250);
count_2 ++;
}

if (valsRec2[0] == 1){pwm.setPWM(5, 0, 600);
Serial.println("Rmax1");

count_2 ++;
}
else(pwm.setPWM(5, 0, 100));

if (valsRec2[1] == 1){pwm.setPWM(6, 0, 600);
Serial.println("Rmax2");
}
else(pwm.setPWM(6, 0, 100));
if (valsRec2[2] == 1){pwm.setPWM(7, 0, 600);
Serial.println("Rmax3");

}
else(pwm.setPWM(7, 0, 100));
if (valsRec2[3] ==1){pwm.setPWM(8, 0, 600);
Serial.println("Rmax4");

}
else(pwm.setPWM(8, 0, 100));
if (valsRec2[4] ==1){pwm.setPWM(9, 0, 600);
Serial.println("Rmax5");

}
else{(pwm.setPWM(9, 0, 100));


if (count_2 >=20){
    Serial.println("Arduino Restart");
  digitalWrite(OUTPUT_PIN, LOW);
  delay(500);
}
}
}
