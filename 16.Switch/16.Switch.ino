#include <SimpleButton.h>

using namespace simplebutton;

Switch* s = NULL;

void setup() {
    Serial.begin(115200);
    Serial.println();

    s = new Switch(5);

    Serial.println("Started");
}

void loop() {
    s->update();

    if (s->clicked()) Serial.println("clicked");
}
