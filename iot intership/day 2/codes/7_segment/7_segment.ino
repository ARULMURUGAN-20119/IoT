void setup() 
{
    for(int i=0;i<7;i++)
    {
      pinMode(i,OUTPUT);
    }
}
void loop() 
{
  PORTD=0X3F; delay(1000);
  PORTD=0X06; delay(1000);
  PORTD=0X5B; delay(1000);
  PORTD=0X4F; delay(1000);
  PORTD=0X66; delay(1000);
  PORTD=0X6D; delay(1000);
  PORTD=0X7D; delay(1000);
  PORTD=0X07; delay(1000);
  PORTD=0X7F; delay(1000);
  PORTD=0X6F; delay(1000);
}
