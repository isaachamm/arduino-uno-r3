#include <LiquidCrystal.h>

char intruderArray[]="Intruder"; 
char alertArray[]="Alert"; 
LiquidCrystal lcd(7, 6, 10, 11, 12, 13);

const int pirPin = 2;
const int ledPin = 4;
int state = 0;
void setup()
{
  lcd.begin(16, 2);  
  pinMode(pirPin, INPUT);  
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);    
}

void loop() 
{

  lcd.setCursor(0,0); 
  state = digitalRead(pirPin);         
  if (state == HIGH) {                 
    Serial.println("Somebody here!");  
    lcd.print(intruderArray);
    lcd.setCursor(0, 1);
    lcd.print(alertArray);
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("Monitoring...");
    lcd.clear();
    digitalWrite(ledPin, LOW);
  }
}