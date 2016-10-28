#include <LED.h>

Led led1 = Led(11);

void setup() {
  // put your setup code here, to run once:
  pinMode(led1.getPorta, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  led1.acender(led1);
  delay(100);
  led1.inverter(led1);
  delay(100);
  led1.piscar(led1, 10, 5);
}
