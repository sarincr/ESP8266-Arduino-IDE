
void setup() {
  
  pinMode(16, OUTPUT);
  
  pinMode(4, INPUT);
}

void loop() { 
 int x = digitalRead(4);

   
  if (x == LOW) 
  {
 
    digitalWrite(16, HIGH);
  } else 
  {
    
    digitalWrite(16, LOW);
  }
}
