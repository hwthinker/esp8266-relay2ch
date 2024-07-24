#include <Arduino.h>

// Definisikan pin LED
#define LED_ESP 2
#define RLY1 4
#define RLY2 5


void setup() {
  // Atur kedua pin sebagai output
  pinMode(LED_ESP, OUTPUT);
  pinMode(RLY1, OUTPUT);
  pinMode(RLY2, OUTPUT);
}

void loop() {
  // Nyalakan LED pada pin GPIO2 dan matikan LED pada pin GPIO4
  digitalWrite(LED_ESP, HIGH);
  digitalWrite(RLY1, HIGH);
  digitalWrite(RLY2, HIGH);

  delay(1000); // Tunggu selama 1 detik

  // Matikan LED pada pin GPIO2 dan nyalakan LED pada pin GPIO4
  digitalWrite(LED_ESP, LOW);
  digitalWrite(RLY1, LOW);
  digitalWrite(RLY2, LOW);
  delay(1000); // Tunggu selama 1 detik
}
