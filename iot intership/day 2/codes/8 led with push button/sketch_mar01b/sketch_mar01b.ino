void setup() 
{
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  for(int i=0;i<8;i++)
  {
    pinMode(i,OUTPUT);
  }
}
void loop() 
{
  int a=digitalRead(12);
  int b=digitalRead(13);
  if(a==1)
  {
    digitalWrite(0,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
  }
  if(b==1)
  {
    digitalWrite(1,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
  }
  else
  {
    for(int i=0;i<7;i++)
    {
      digitalWrite(i,LOW);
    }
  }
}
