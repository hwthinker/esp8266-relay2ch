#include <Arduino.h>

// Definisikan pin LED
#define LED_ESP 2 // aktif low
#define IO2   LED_ESP  
#define IO13  13  //aktif LOW
#define IO12  12  //aktif LOW
#define IO14  14  //aktif LOW
#define IO16  16  //aktif LOW
#define IO15  15  //tidak bisa  untuk input

#define IO0   0  // pullup internal enable
#define IO1   1  // tidak bisa untuk input 
#define BTN1   13
#define BTN2   12
#define BTN3   14
#define RLY1 4
#define RLY2 5


void setup() {
  // Atur kedua pin sebagai output
  pinMode(LED_ESP, OUTPUT);
  pinMode(BTN1,INPUT_PULLUP);
  pinMode(BTN2,INPUT_PULLUP);
  pinMode(BTN3,INPUT_PULLUP);
  pinMode(RLY1, OUTPUT);
  pinMode(RLY2, OUTPUT);
}

void loop() {

   if (!digitalRead(BTN1)) {
        digitalWrite(LED_ESP, LOW);
        delay(1000);
   } else {
        digitalWrite(LED_ESP, HIGH);
   }

   if (!digitalRead(BTN2)) {
        digitalWrite(RLY1, LOW);
        delay(1000);
   } else {
        digitalWrite(RLY1, HIGH);
   }

   if (!digitalRead(BTN3)) {
        digitalWrite(RLY2, LOW);
        delay(1000);
   } else {
        digitalWrite(RLY2, HIGH);
   }
}
