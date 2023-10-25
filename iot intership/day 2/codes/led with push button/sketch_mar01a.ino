void setup() 
{
 pinMode(12,INPUT);
 pinMode(13,OUTPUT); 
}
void loop() 
{
  int a=digitalRead(12);
  if(a==1)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
