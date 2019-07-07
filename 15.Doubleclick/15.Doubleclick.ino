
#include "OneButton.h"


OneButton button(A0, true);


void setup() {
 
  pinMode(13, OUTPUT);       
  button.attachDoubleClick(doubleclick);
}  
void loop() {
   
  button.tick();

   
  delay(10);
} 
void doubleclick() {
  static int m = LOW; 
  m = !m;
  digitalWrite(13, m);
} 
