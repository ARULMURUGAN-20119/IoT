#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  lcd.begin(16,2);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
}

void loop() {
   int a=digitalRead(11);
   int b=digitalRead(10);
   if (a==1)
   {
    digitalWrite(13,1);digitalWrite(12,0);
    digitalWrite(9,0);digitalWrite(8,1);
    lcd.setCursor(0,0);lcd.print("M1 M2");
    lcd.setCursor(0,1);lcd.print("CLOCKWISE");
    delay(1000);
    lcd.clear();
   }
   if (b==1)
   {
    digitalWrite(13,0);digitalWrite(12,1);
    digitalWrite(9,1);digitalWrite(8,0);
    lcd.setCursor(0,0);lcd.print("M1 M2");
    lcd.setCursor(0,1);lcd.print("ANTICLOCKWISE");
    delay(1000);
    lcd.clear();
   }
   else
   {
    lcd.setCursor(0,0);lcd.print("M1 M2");
    lcd.setCursor(0,1);lcd.print("OFF");
    delay(1000);
    lcd.clear();
   }
}
