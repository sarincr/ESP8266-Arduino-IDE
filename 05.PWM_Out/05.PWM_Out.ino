
void setup() 
{ 
  pinMode(16, OUTPUT);
}


void loop() 
{

 for(int x=0;x<1028;x++)
 {
  analogWrite(16, x);
  delay(1);
 }
}
