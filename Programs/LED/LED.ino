#include "LPD8806.h"
#include "SPI.h"

int nLEDs = 50;

int dataPin = 2;
int clockPin = 1;

LPD8806 strip = LPD8806(nLEDs, dataPin, clockPin);

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
  (strip.Color(127, 0, 0), 100); //Red
  (strip.Color(0,127, 0), 100);
  (strip.Color(0,0, 127), 100);
  (strip.Color(127,127, 127), 100);
}
