#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

int trig = 10;
int echo = 9;


long duration;
double distance, feet;

void setup(){
  lcd.begin(16,2);
  
  // setup pins for i/o
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);  
}

void loop()
{
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration * .0133 / 2;
  feet = distance / 12;
  
  lcd.setCursor(0,0);
  lcd.print("Inches: ");
  lcd.print(distance);
 
  lcd.setCursor(0,1);
  lcd.print("Feet: ");
  lcd.print(feet);

  delay(500);
}
