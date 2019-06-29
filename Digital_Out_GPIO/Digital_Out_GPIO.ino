uint8_t LED_Pin = 16;
void setup() 
{
  pinMode( LED_Pin, OUTPUT);
}

void loop()
{
  digitalWrite( LED_Pin, HIGH);    
  delay(100);                       
  digitalWrite( LED_Pin, LOW);     
  delay(100);                       
}
