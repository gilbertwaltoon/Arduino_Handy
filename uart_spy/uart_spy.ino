/*
* Simple sketch to watch & print uart traffic
*/

#include <SoftwareSerial.h>
#include <Wire.h>

#define UART_SPEED 9600
#define rxPin 10
#define txPin 11

SoftwareSerial uart_spy(rxPin, txPin);

void setup() {
  /* Setup screen terminal */
  Serial.begin(9600);
  Serial.println("Starting...");
  /* Setup uart spy */
  uart_spy.begin(9600);
  Serial.println("Spying traffic...");
}

void loop() {
  if (uart_spy.available()) Serial.write(uart_spy.read());
}
