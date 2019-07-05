#include <Arduino.h>
#include <CMMC_LED.h>

CMMC_LED led1(16, LOW);
CMMC_LED led2(2, LOW);


void setup()
{
  led1.init();
  led2.init();

}

void loop()
{
  led1.toggle();
  led2.toggle();
  delay(1000);

}
