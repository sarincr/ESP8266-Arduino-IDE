
#include <timer.h>

auto timer = timer_create_default();  

bool toggle_led(void *) 
{
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN)); // toggle the LED
   
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); 
 
  timer.every(100, toggle_led);
}

void loop() {
  timer.tick(); 
}
