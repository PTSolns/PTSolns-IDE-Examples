// Example: Digital Read Serial
// Last update: Dec 23, 2025
//
// DESCRIPTION
// Reads a digital input on pin 2, prints the result to the Serial Monitor
// Connect a tactile push button with one side to D2, and pulled to ground (GND) through a 10kOhm resistor.
// Connect the other side to 5V. When the button is pressed the digital pin D2 is pulled High.
// When the button is released the pin D2 is pulled back to Low.

// Digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;

// The setup routine runs once when you press reset:
void setup() {
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  //Make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// The loop routine runs over and over again forever:
void loop() {
  // Read the input pin:
  int buttonState = digitalRead(pushButton);
  // Print out the state of the button:
  Serial.println(buttonState);
  delay(1);  // Delay in between reads for stability
}
