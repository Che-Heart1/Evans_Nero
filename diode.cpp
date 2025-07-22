// Diode Signal Detector on ESP32
const int signalPin = 25 Pin connected after the diode
void setup() {
Serial.begin(115200);
pinMode (signalPin, INPUT);
} // This closing brace was missing
void loop() {
int signalState
=
digitalRead(signal Pin); |
if (signalState == HIGH) {
Serial.println("High voltage detected!");
} else {
}
Serial.println("No high voltage detected (safe).");
delay (500);
}
