//include modules
#include <Arduino.h>
#include "pins.h"
#include "command.h"
#include "idle.h"
#include "test.h"
#include "transmit.h"




// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}