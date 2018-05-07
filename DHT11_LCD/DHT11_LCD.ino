#include <dht.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
dht DHT;
#define DHT11_PIN 7

double temp = 0;

void setup(){
  lcd.begin(16,2);
}

void loop()
{
  int check = DHT.read11(DHT11_PIN);
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  temp = DHT.temperature * 1.8 + 32;
  lcd.print(temp);
  lcd.print((char)223);
  lcd.print("F");
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print((char)37);
  delay(1000);
}

