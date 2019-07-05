int LED = 16;
int PIRSensor = 7;

void setup(){
 pinMode(PIRSensor,INPUT);
 pinMode(LED,OUTPUT);
}

void loop() {
 digitalWrite(LED, digitalRead(PIRSensor));
 delay(10);
}
