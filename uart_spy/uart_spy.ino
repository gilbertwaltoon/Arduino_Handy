/*
* Simple sketch to watch & print uart traffic
*/

#include <SoftwareSerial.h>
#include <Wire.h>

#define UART_SPEED 9600
/* On the Uno black-switch optionally selects 3V3 */
#define rxPin 10  /* On Uno 10 is marked 10; On Nano 11 is marked D11 */ 
#define txPin 11  /* On Uno 11 is marked 11; On Nano 11 is marked D11 */


SoftwareSerial uart_spy(rxPin, txPin);

void setup() {
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
 
  /* Setup putty-type serial monitor terminal */
  Serial.begin(9600);
  Serial.println("Starting...");
  /* Setup uart spy */
  uart_spy.begin(9600);
  Serial.println("Spying traffic....");
}

void loop() {
  if (uart_spy.available()) Serial.write(uart_spy.read());

  /* UART Write example  
  int bytessent = uart_spy.write("hello\n\r");
  Serial.println(bytessent);
  delay(500);
  */

}
