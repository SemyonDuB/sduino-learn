#include <Arduino.h>
void setup() {
// write your initialization code here
    pinMode(PE3, OUTPUT);
}

void loop() {
// write your code here
    digitalWrite(PE3, HIGH);
    delay(1000);
    digitalWrite(PE3, LOW);
    delay(1000);
}