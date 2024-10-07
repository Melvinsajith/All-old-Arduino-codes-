void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);



}

while(Serial.available())
  {
    

   C = Serial.readString();

    
    if (C[0]=='F'){
    Serial.println(C[0]);

      Serial.println("M1");
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
         digitalWrite(in3, HIGH);
         digitalWrite(in4, LOW);
         delay(3000);
         digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
         digitalWrite(in3, LOW);
         digitalWrite(in4, LOW);
    }
    if (C[0]=='B'){
    Serial.println(C[0]);

      Serial.println("M2");
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
         digitalWrite(in3, LOW);
         digitalWrite(in4, HIGH);
    }
    if (C[0]=='R'){
    Serial.println(C[0]);

      Serial.println("M1");
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
         digitalWrite(in3, HIGH);
         digitalWrite(in4, LOW);
    }
    if (C[0]=='L'){
    Serial.println(C[0]);

      Serial.println("M1");
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
         digitalWrite(in3, LOW);
         digitalWrite(in4, LOW);
    }
    }}

                   // tell servo to go to position in variable 'pos'
