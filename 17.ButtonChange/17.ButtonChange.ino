

#include "Button2.h";

 
#define BUTTON_A_PIN  2
 

Button2 buttonA = Button2(BUTTON_A_PIN);


void setup()
{
  Serial.begin(9600);
  delay(50);
  Serial.println("\n\nButton Demo");
  buttonA.setChangedHandler(changed);
  buttonA.setTapHandler(tap);
}

 

void loop() {
  buttonA.loop();
}

void changed(Button2& btn) {
    Serial.println("changed");
}
