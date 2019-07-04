#include <StopWatch.h>

StopWatch stopwatch;

void setup()
{
    Serial.begin(115200);
    delay(5000);

    stopwatch.start();
}

void loop()
{
    if (stopwatch.isRunning())
    {
        Serial.print(", stopwatch : ");
        Serial.println(stopwatch.ms());
    }
    if (stopwatch.ms() > 5000) stopwatch.restart();
}
