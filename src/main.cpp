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

void setup() {
  Serial.begin(9600);
  LoraOnboard.begin(9600);

}

void loop() {

}