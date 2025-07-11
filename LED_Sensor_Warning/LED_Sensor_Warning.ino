
const int pirPin = 2;
const int ledPin = 4;
// Declare and initialize the state variable
int state = 0;

void setup() {
  pinMode(pirPin, INPUT);  // Set the PIR pin as an input
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);      // Start serial communication with a baud rate of 9600
}

void loop() {
  state = digitalRead(pirPin);         // Read the state of the PIR sensor
  if (state == HIGH) {                 // If the PIR sensor detects movement (state = HIGH)
    Serial.println("Somebody here!");  // Print "Somebody here!" to the serial monitor
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("Monitoring...");
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}
