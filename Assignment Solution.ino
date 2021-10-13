
 const int ldr_Input = A0;   // input pin to read data from the LDR
  // 4 output pins for the LEDs
 const int led1 = 2;
 const int led2 = 4;
 const int led3 = 7;
 const int led4 = 8;
   

void setup() {
  // put your setup code here, to run once:
     Serial.begin(9600);
  // pins direction
    pinMode(ldr_Input,INPUT);  // initialize ldr_Input pin as an Input
    pinMode(led1,OUTPUT);  // initialize led1 pin (pin 2) as an Output
    pinMode(led2,OUTPUT);  // initialize led1 pin (pin 4) as an Output
    pinMode(led3,OUTPUT);  // initialize led1 pin (pin 7) as an Output
    pinMode(led3,OUTPUT);  // initialize led1 pin (pin 8) as an Output

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr_value = analogRead(ldr_Input); // read the value of this LDR input signal and save it and loop over it over and over again
  // code functionality
    if (ldr_value == 0){
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
      }
      else if(ldr_value <= 1024/4){
              digitalWrite(led1, HIGH);
              digitalWrite(led2, HIGH);
              digitalWrite(led3, HIGH);
              digitalWrite(led4, LOW);
        }
        else if(ldr_value <= 1024/3){
              digitalWrite(led1, HIGH);
              digitalWrite(led2, HIGH);
              digitalWrite(led3, LOW);
              digitalWrite(led4, LOW);
        }
        else if(ldr_value <= 1024/2){
              digitalWrite(led1, HIGH);
              digitalWrite(led2, LOW);
              digitalWrite(led3, LOW);
              digitalWrite(led4, LOW);
        }
        else {
              digitalWrite(led1, LOW);
              digitalWrite(led2, LOW);
              digitalWrite(led3, LOW);
              digitalWrite(led4, LOW);
          }

}

