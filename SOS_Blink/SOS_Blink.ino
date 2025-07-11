const int MORSE_CODE_UNIT_MS = 100;
const int DOT_UNIT = MORSE_CODE_UNIT_MS;
const int DASH_UNIT = MORSE_CODE_UNIT_MS * 3;
const int INTRA_CHAR_SPACE = MORSE_CODE_UNIT_MS; // (between elements within a letter)
const int INTER_CHAR_SPACE = MORSE_CODE_UNIT_MS * 3; // (between letters within a word)
const int WORD_SPACE = MORSE_CODE_UNIT_MS * 7; // (between words)

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  // S.O.S.
  // S
  blinkS();

  // O
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DASH_UNIT);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(INTRA_CHAR_SPACE);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DASH_UNIT);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(INTRA_CHAR_SPACE);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DASH_UNIT);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(INTER_CHAR_SPACE);

    // S
  blinkS();
}

void blinkS() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DOT_UNIT);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(INTRA_CHAR_SPACE);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DOT_UNIT);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(INTRA_CHAR_SPACE);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DOT_UNIT);
  digitalWrite(LED_BUILTIN, LOW);  
  delay(WORD_SPACE);
}
