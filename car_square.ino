// Car square program : goes forward for 5 seconds and then turns left (repeats 4 times)
// To get a 90 degree turn, use trial and error to determine number of milliseconds


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
  
  // storing number of milliseconds passed since start of program in int variable time
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

  // turns left for 3 seconds -- change number of seconds based on surface to get 90 degree turn
  if( time < 13000 && time > 10000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 0);
    analogWrite(EnB, 255);
  }
  // goes forward for 5 seconds
    if( time < 18000 && time > 13000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 255);
    analogWrite(EnB, 255);
  }

  // turns left for 3 seconds -- change number of seconds based on surface to get 90 degree turn
  if( time < 21000 && time > 18000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 0);
    analogWrite(EnB, 255);
  }
  // goes forward for 5 seconds
    if( time < 26000 && time > 21000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 255);
    analogWrite(EnB, 255);
  }

  // turns left for 3 seconds -- change number of seconds based on surface to get 90 degree turn
  if( time < 29000 && time > 26000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 0);
    analogWrite(EnB, 255);
  }
  // goes forward for 5 seconds
    if( time < 34000 && time > 29000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 255);
    analogWrite(EnB, 255);
  }

  // turns left for 3 seconds -- change number of seconds based on surface to get 90 degree turn
  if( time < 37000 && time > 34000) {
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnA, 0);
    analogWrite(EnB, 255);
  }

  // stops the car
  if( time > 37000) {
    digitalWrite(In1, LOW);
    digitalWrite(In2, LOW);
    digitalWrite(In3, LOW);
    digitalWrite(In4, LOW);
  }

}
