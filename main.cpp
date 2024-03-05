#include <Arduino.h>
#define LED_BUILTIN 23
#define DELAY 500000

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("ON");
  delay(DELAY);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("OFF");
  delay(DELAY);
}
struct Button {
  const uint8_t PIN;
  uint32_t numberKeyPresses;
  bool pressed;
  };

Button button1 = {18, 0, false};

void pepe (){
  button1.numberKeyPresses += 1;
  button1.pressed = true;
}

void setup (){
  Serial.begin (115200);
  pinMode(button1.PIN, INPUT_PULLUP);
  attachInterrupt(button1.PIN, pepe, FALLING);
}
