#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup()
{
  lcd.begin(16,4);
  pinMode(A1,INPUT);
}
void loop() 
{
  int a,CELSIUS;
  a=analogRead(A1);
  CELSIUS=0.48*a;
  lcd.setCursor(0,0);
  lcd.print("TEMPERATURE:");
  lcd.setCursor(2,0);
  lcd.print(CELSIUS);
}
