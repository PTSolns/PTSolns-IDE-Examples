// Example: Blink
// Last update: Dec 23, 2025
//
// DESCRIPTION
// Turns ON and OFF an LED using delay().
// Change the delay time (in milliseconds) to see the rate of blinking change.

// The setup function runs once when you press reset or power the board
void setup() {
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED on (HIGH is the voltage level)
  delay(1000);                      // Wait for 1000 milliseconds
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED off by making the voltage LOW
  delay(1000);                      // Wait for 1000 milliseconds second
}
