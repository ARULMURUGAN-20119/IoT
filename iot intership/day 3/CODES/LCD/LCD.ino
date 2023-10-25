#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup()
{
  lcd.begin(16,2);
}
void loop() 
{
  lcd.setCursor(5,0);
  lcd.print("ARULMURUGAN T");
  lcd.setCursor(6,1);
  lcd.print("ECE");
}
