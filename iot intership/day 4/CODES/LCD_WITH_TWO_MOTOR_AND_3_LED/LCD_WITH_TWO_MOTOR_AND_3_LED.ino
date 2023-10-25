#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() 
{
  lcd.begin(3,3);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() 
{
   int a,C;
   a=analogRead(A0);
   C=0.48*a;
   if (C>40)
   {
    digitalWrite(13,1);digitalWrite(12,0);
    digitalWrite(9,0);digitalWrite(8,1);
    lcd.setCursor(0,0);lcd.print("TEMPERATURE:");
    lcd.setCursor(13,0);lcd.print(C);
    lcd.setCursor(0,1);lcd.print("TEMPERATURE HIGH");
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(9,LOW);
    delay(1000);
    lcd.clear();
   }
   else if (C<30)
   {
    digitalWrite(13,0);digitalWrite(12,0);
    digitalWrite(9,0);digitalWrite(8,0);
    lcd.setCursor(0,0);lcd.print("TEMPERATURE:");
    lcd.setCursor(13,0);lcd.print(C);
    lcd.setCursor(0,1);lcd.print("TEMPERATURE LOW");
    digitalWrite(1,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(1000);
    lcd.clear();
   }
   else
   {
    digitalWrite(13,0);digitalWrite(12,1);
    digitalWrite(9,1);digitalWrite(8,0);
    lcd.setCursor(0,0);lcd.print("TEMPERATURE:");
    lcd.setCursor(13,0);lcd.print(C);
    lcd.setCursor(0,1);lcd.print("TEMPERATURE NORMAL");
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(1,LOW);
    delay(1000);
    lcd.clear();
   }
}
