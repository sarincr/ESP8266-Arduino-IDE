uint8_t ServoMotorpin = 16;

void setup(){
 analogWrite(ServoMotorpin, 512);
 analogWriteFreq(50);  /* Set PWM frequency to 50Hz */
}
void loop(){
 uint16_t dutycycle=  analogRead(A0); /* Read potentiometer to control servo motor */
 if(dutycycle> 1023) dutycycle = 1023;
 dutycycle = 25+((85*dutycycle/1023)); /* make it in range 20 to 110 */
 analogWrite(ServoMotorpin, dutycycle);  /* Write duty cycle to pin */
 delay(100);
}
