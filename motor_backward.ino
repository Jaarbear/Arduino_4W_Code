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
  
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  analogWrite(EnA, 255);
  analogWrite(EnB, 255);

}
  
