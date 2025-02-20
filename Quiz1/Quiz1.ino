const int redPin = 9; //sets pins to digital outputs
const int greenPin = 8;
const int bluePin = 7;

const int buttonRed = 5; //set buttons for digital output
const int buttonGreen = 3;
const int buttonBlue = 4;

void setup() {
    pinMode(redPin, OUTPUT); //set outputs
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    
    pinMode(buttonRed, INPUT_PULLUP);
    pinMode(buttonGreen, INPUT_PULLUP); //set inputs
    pinMode(buttonBlue, INPUT_PULLUP);
}

void loop() {
  
    int redState = digitalRead(buttonRed);
    int greenState = digitalRead(buttonGreen);
    int blueState = digitalRead(buttonBlue);

    digitalWrite(redPin, !redState); // Invert logic (LOW means pressed)
    digitalWrite(greenPin, !greenState);
    digitalWrite(bluePin, !blueState);


    
}


