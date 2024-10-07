
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


#define SERVOMIN  150 
#define SERVOMAX  600

String C;

int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;
int pos5 = 0;
int pos6 = 0;
int pos7 = 0;
int pos8 = 0;
int pos9 = 0;
int pos10 = 0;
int pos11 = 0;
int pos12 = 0;
int pos13 = 0;
int pos14 = 0;
int pos15 = 0;
// variable to store the servo position

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    // attaches the servo on pin 9 to the servo object
  pwm.begin();
  pwm.setPWMFreq(60);

}


void loop() {

while(Serial.available())
  {
    

   C = Serial.readString();

    
    if (C[0]=='G'){
    Serial.println(C[0]);

      Serial.println("M1");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos1 = C.toInt();
      
      pos1 = map(pos1, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(0, 0, pos1);

                   // tell servo to go to position in variable 'pos'

    }
     if (C[0]=='H'){
    Serial.println(C[0]);

      Serial.println("M2");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos2 = C.toInt();
      pos2 = map(pos2, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(1, 0, pos2);

    }
if (C[0]=='I'){
    Serial.println(C[0]);

      Serial.println("M3");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos3 = C.toInt();
      pos3 = map(pos3, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(2, 0, pos3);

                    // tell servo to go to position in variable 'pos'

    }
     if (C[0]=='J'){
    Serial.println(C[0]);

      Serial.println("M4");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos4 = C.toInt();
      pos4 = map(pos4, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(3, 0, pos4);

    }
    if (C[0]=='K'){
    Serial.println(C[0]);

      Serial.println("M5");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos5 = C.toInt();
      pos5 = map(pos5, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(4, 0, pos5);

                    // tell servo to go to position in variable 'pos'

    }
     if (C[0]=='M'){
    Serial.println(C[0]);

      Serial.println("M6");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos6 = C.toInt();
      pos6 = map(pos6, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(5, 0, pos6);

    }
    if (C[0]=='N'){
    Serial.println(C[0]);

      Serial.println("M7");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos7 = C.toInt();
      pos7 = map(pos7, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(6, 0, pos7);

                    // tell servo to go to position in variable 'pos'

    }
     if (C[0]=='O'){
    Serial.println(C[0]);

      Serial.println("M8");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos8 = C.toInt();
      pos8 = map(pos8, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(7, 0, pos8);

    }
    if (C[0]=='P'){
    Serial.println(C[0]);

      Serial.println("M9");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos9 = C.toInt();
      pos9 = map(pos9, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(8, 0, pos9);

                    // tell servo to go to position in variable 'pos'

    }
     if (C[0]=='A'){
    Serial.println(C[0]);

      Serial.println("M10");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos10 = C.toInt();
      pos10 = map(pos10, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(9, 0, pos10);

    }
    if (C[0]=='B'){
    Serial.println(C[0]);

      Serial.println("M11");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos11 = C.toInt();
      pos11 = map(pos11, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(10, 0, pos11);

                    // tell servo to go to position in variable 'pos'

    }
     if (C[0]=='C'){
    Serial.println(C[0]);

      Serial.println("M12");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos12 = C.toInt();
      pos12 = map(pos12, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(11, 0, pos12);

    }
     if (C[0]=='D'){
    Serial.println(C[0]);

      Serial.println("M13");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos13 = C.toInt();
      pos13 = map(pos13, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(12, 0, pos13);

    }
     if (C[0]=='E'){
    Serial.println(C[0]);

      Serial.println("M14");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos14 = C.toInt();
      pos14 = map(pos14, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(13, 0, pos14);

    }
     if (C[0]=='F'){
    Serial.println(C[0]);

      Serial.println("M15");
      Serial.println(C);
      C.remove(0,1);
      Serial.println(C);
      pos15 = C.toInt();
      pos15 = map(pos15, 0, 180,SERVOMIN,SERVOMAX);
      pwm.setPWM(14, 0, pos15);

    }
}
}
