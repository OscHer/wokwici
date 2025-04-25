#include <Arduino.h>
#line 1 "/home/oscar/devel/personal/wokwici/blink/blink.ino"
#line 1 "/home/oscar/devel/personal/wokwici/blink/blink.ino"
void setup();
#line 5 "/home/oscar/devel/personal/wokwici/blink/blink.ino"
void loop();
#line 1 "/home/oscar/devel/personal/wokwici/blink/blink.ino"
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

