// Example: Read Analog Voltage
// Last update: Dec 23, 2025
//
// DESCRIPTION
// Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
// Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
// Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

// The setup routine runs once when you press reset:
void setup() {
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// The loop routine runs over and over again forever:
void loop() {
  // Read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // Print out the value you read:
  Serial.println(voltage);
}
