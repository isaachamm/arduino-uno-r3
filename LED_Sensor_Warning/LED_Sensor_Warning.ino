
const int pirPin = 2;
const int ledPin = 4;
int state = 0;

void setup() {
  pinMode(pirPin, INPUT);  
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  state = digitalRead(pirPin);        
  if (state == HIGH) {                
    Serial.println("Somebody here!");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("Monitoring...");
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}
