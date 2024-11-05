//include modules
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <HTTPClient.h>
#include <WiFi.h>
#include "pins.h"
#include "command.h"
#include "idle.h"
#include "test.h"
#include "transmit.h"


SoftwareSerial LoraOnboard(12,13);
volatile bool ledState = LOW;

// IRAM_ATTR allows it to run faster
void IRAM_ATTR handleButtonPress() {
  ledState = !ledState; // Toggle LED state
  digitalWrite(LED_PIN, ledState);
}
void setup() {
  Serial.begin(9600);
  LoraOnboard.begin(9600);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), handleButtonPress, FALLING);
}

void loop() {

}