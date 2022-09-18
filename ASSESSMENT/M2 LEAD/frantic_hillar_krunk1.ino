int a=0;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(1,INPUT);
}
void loop()
{
  a= digitalRead(1);
  if(a==HIGH)
  {
    digitalWrite(13,HIGH);
    tone(9,1000);
  }
  else
  {
    digitalWrite(13,LOW);
    noTone(9);
  }
  delay(20);
}  







