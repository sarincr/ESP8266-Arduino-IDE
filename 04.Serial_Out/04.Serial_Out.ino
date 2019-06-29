
void setup() {

  
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() { 
 int x = digitalRead(4);

   Serial.println("X = ");
   Serial.println(x);

}
