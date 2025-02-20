const int redPin = 9;
const int greenPin = 8;
const int bluePin = 7;

const int buttonRed = 5;
const int buttonGreen = 3;
const int buttonBlue = 4;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    
    
    pinMode(buttonRed, INPUT_PULLUP);
    pinMode(buttonGreen, INPUT_PULLUP);
   
}

void loop() {
    int redState = digitalRead(buttonRed);
    int greenState = digitalRead(buttonGreen);
 

    digitalWrite(redPin, !redState);  // Invert logic (LOW means pressed)
    digitalWrite(greenPin, !greenState);
  
}


