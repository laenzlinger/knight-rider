/* Lauflicht */

// Definition of Input and Output Pins
int leds[] = {3,5,6,9,10};
int sensorPin = A0;
int speedSwitchPin = 2;
int intensitySwitchPin = 4;

// Global Variables
int lightningLed = 0;
boolean countLedUp = true;

int intensity = 100;

int maxDelay = 1000;
int loopDelay = 10;
int currentDelay = 0;


void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
  
  pinMode(speedSwitchPin, INPUT);
  digitalWrite(speedSwitchPin, HIGH); // Activate Pull Up Resistor
  
  pinMode(intensitySwitchPin, INPUT);
  digitalWrite(intensitySwitchPin, HIGH); 
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  if (digitalRead(speedSwitchPin) == LOW) {
    maxDelay = 1024 - sensorValue; 
  } 
  if (digitalRead(intensitySwitchPin) == LOW) {
    intensity = (sensorValue / 4);
  }
  if (currentDelay > maxDelay) {
    shiftLed();
    currentDelay = 0;
  }
  writeLed();
   
  delay(loopDelay);
  currentDelay = currentDelay + loopDelay;
}


void writeLed() {
  for (int i = 0; i < 5; i++) {
    if (i == lightningLed) {
       analogWrite(leds[i], intensity); 
    } else {
       analogWrite(leds[i], 0);
    }  
  }
  
}

void shiftLed() {
  if (countLedUp) {
    lightningLed++;
  } else {
    lightningLed--;
  }
  if(lightningLed == 4) {
    countLedUp = false;
  }
  if (lightningLed == 0) {
    countLedUp = true;
  }
}
