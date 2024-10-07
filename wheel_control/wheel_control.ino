#define enA 9
#define in1 6
#define in2 7
#define in3 8
#define in4 10
String C;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);



}

void loop() {

while(Serial.available()){
    

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

         delay(3000);
         digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
         digitalWrite(in3, LOW);
         digitalWrite(in4, LOW);
    }
    if (C[0]=='R'){
    Serial.println(C[0]);

      Serial.println("M3");
        digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
         digitalWrite(in3, HIGH);
         digitalWrite(in4, LOW);
         delay(3000);
         digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
         digitalWrite(in3, LOW);
         digitalWrite(in4, LOW);
    }
    if (C[0]=='L'){
    Serial.println(C[0]);

      Serial.println("M4");
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
         digitalWrite(in3, LOW);
         digitalWrite(in4, LOW);
         delay(3000);
         digitalWrite(in1, LOW);
        digitalWrite(in2, LOW);
         digitalWrite(in3, LOW);
         digitalWrite(in4, LOW);
    }
    }}

                   // tell servo to go to position in variable 'pos'
