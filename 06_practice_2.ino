// Connect the LED to pin 9
const int ledPin = 9;

// Initialize brightness variable
int brightness = 0;    
int fadeAmount = 5;    

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Set the LED brightness
  analogWrite(ledPin, brightness);

  // Change brightness by fadeAmount
  brightness = brightness + fadeAmount;

  // Reverse direction if brightness reaches maximum or minimum
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;  // Reverse direction
  }

  // Wait for 30ms (controls the speed of change)
  delay(30);
}
