
//initializing the pins
int In1 = 7;
int In2 = 8;
int EnA = 9;
int In3 = 4;
int In4 = 5;
int EnB = 6;


void setup() {
  
  // initializes serial connection at 9600 bits per second
  Serial.begin(9600);

  // setting pins to output
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(EnA, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(EnB, OUTPUT);
  delay(5000); // delaying five seconds to allow for setup

}

void loop() {
  
  // storing number of seconds passed since start of program in int variable time
    int time = millis();

    // goes forward for 5 seconds
  if( time < 10000 && time > 5000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 255);
    analogWrite(EnB, 255);
  }

  // turns left for 2.8 seconds
  if( time < 12800 && time > 10000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 0);
    analogWrite(EnB, 255);
  }

  // goes forward for 5 seconds
   if(time < 18200 && time > 13200) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 255);
    analogWrite(EnB, 255);
   }

   // stops car
  if(time > 18200) {
    digitalWrite(In1, LOW);
    digitalWrite(In2, LOW);
    digitalWrite(In3, LOW);
    digitalWrite(In4, LOW);
    
  }
}
