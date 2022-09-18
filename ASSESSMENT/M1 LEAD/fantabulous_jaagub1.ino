
               HOME AUTOMATION CODE

int pinSensor =2;
int pinLed =12;
int pinBuzzer =13;
int pirSensor =0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(pinSensor, INPUT);
  pinMode(pinLed, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  
}

void loop()
{
  pirSensor = digitalRead(pinSensor);
  if (pirSensor == HIGH)
  {
   digitalWrite(pinLed, HIGH);
   tone(pinBuzzer, 1000,500);
    
  }
  else{
    
  digitalWrite(pinLed, LOW);
  
}
  delay(10);
{
  double a = analogRead(A0);
  double c = (((a/1024)*5)-0.5)*100;
  Serial.print("Celsius valueL: ");
  Serial.println(c);
  delay(1000);
}
}