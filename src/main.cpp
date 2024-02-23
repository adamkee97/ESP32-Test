#include <Arduino.h>
#include "ELECHOUSE_CC1101_SRC_DRV.h"

void setup()
{
  Serial.begin(9600);
  ELECHOUSE_cc1101.Init();
}

void loop()
{
  // placeholder
}