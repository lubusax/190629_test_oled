#include <Arduino.h>
#include "display.h"

void setup(void)
{
  Serial.begin(115200);
  beginDisplay();
}

void loop(void)
{

  printBig("08:33");
  printMedium("playa sol");

}