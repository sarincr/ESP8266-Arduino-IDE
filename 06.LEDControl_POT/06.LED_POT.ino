void setup() 
{
  pinMode(16, OUTPUT);
}

void loop() 
{
  int x=analogRead(A0);
  analogWrite(16, x);
  delay(1);
}
