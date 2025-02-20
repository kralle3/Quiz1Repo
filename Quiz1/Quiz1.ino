const int redPin = 9;
const int greenPin = 8;
const int bluePin = 7;

const int buttonRed = 5;
const int buttonGreen = 4;
const int buttonBlue = 3;

void setup() {
    pinMode(redPin, OUTPUT);

    pinMode(buttonRed, INPUT_PULLUP);
 
}

void loop() {
    int redState = digitalRead(buttonRed);
   

    digitalWrite(redPin, !redState);  // Invert logic (LOW means pressed)
  
}


