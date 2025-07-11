#include <LiquidCrystal.h>// include the library code
/**********************************************************/
char intruderArray[]="Intruder";  //the string to print on the LCD
char alertArray[]="Alert";  //the string to print on the LCD
int tim = 500;  //the value of delay time
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 6, 10, 11, 12, 13);

const int pirPin = 2;
const int ledPin = 4;
int state = 0;
/*********************************************************/
void setup()
{
  lcd.begin(16, 2);  // set up the LCD's number of columns and rows: 
  pinMode(pirPin, INPUT);  // Set the PIR pin as an input
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);    
}
/*********************************************************/
void loop() 
{

  lcd.setCursor(0,0);  // set the cursor to column 15, line 0
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
    delay(100);
  }
}
/************************************************************/