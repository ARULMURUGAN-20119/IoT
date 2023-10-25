#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() 
{
  lcd.begin(16,4);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() 
{
  int a;
  a=analogRead(A0);
  if (a<200)
  {
    digitalWrite(7,1);
    digitalWrite(6,0);
    digitalWrite(5,0);
    
    Serial.print("WATER LEVEL:");
    Serial.println(a);
    lcd.setCursor(0,0);
    lcd.print("watr lvl:");
    lcd.setCursor(10,0);
    lcd.print(a);
    lcd.setCursor(1,1);
    lcd.print("watr lvl low");
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    delay(1000);
    lcd.clear();
  }
  else if(a>=200 && a<=700)
  {
    digitalWrite(7,0);
    digitalWrite(6,1);
    digitalWrite(5,0);
    
    Serial.print("WATER LEVEL:");
    Serial.println(a);
    lcd.setCursor(0,0);
    lcd.print("watr lvl:");
    lcd.setCursor(10,0);
    lcd.print(a);
    lcd.setCursor(1,1);
    lcd.print("watr lvl norm");
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
    delay(1000);
    lcd.clear();
  }
  else
  {
    digitalWrite(7,0);
    digitalWrite(6,0);
    digitalWrite(5,1);
    
    Serial.print("WATER LEVEL:");
    Serial.println(a);
    lcd.setCursor(0,0);
    lcd.print("watr lvl:");
    lcd.setCursor(10,0);
    lcd.print(a);
    lcd.setCursor(1,1);
    lcd.print("watr lvl high");
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(1000);
    lcd.clear();
  }
 }
