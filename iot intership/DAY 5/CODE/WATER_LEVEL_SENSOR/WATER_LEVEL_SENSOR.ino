#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup()
{
  lcd.begin(16,4);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int water;
  water=analogRead(A0);
  Serial.print("WATER LEVEL:");
  Serial.println(water);
  lcd.setCursor(0,0);
  lcd.print("WATER LEVEL:");
  lcd.setCursor(6,1);
  lcd.print(water);
}
