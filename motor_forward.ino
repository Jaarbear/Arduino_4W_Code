
// Initializing the pins
int In1 = 7;
int In2 = 8;
int EnA = 9;
int In3 = 4;
int In4 = 5;
int EnB = 6;


void setup() {
  // initializes serial connection at 9600 bits per second
  Serial.begin(9600);

  // Setting pins to output
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(EnA, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(EnB, OUTPUT);
  delay(2000);  //delaying 2 seconds to give you time to set up the robot
 

}

void loop() {
  
    // setting digital state of pins In1 and In3 to HIGH to go forward
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);

    // Determines speed from 0-255
    analogWrite(EnA, 255);        
    analogWrite(EnB, 255);
}



