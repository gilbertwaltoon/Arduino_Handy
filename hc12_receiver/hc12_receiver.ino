/* Tested with Nano
*  HC12-TX to Nano-D10 ; HC12-RX to Nano-D11; HC12-SET no connect; 5V power  
*/ 
#include <SoftwareSerial.h>
SoftwareSerial hc12(10,11);

void setup() {
  Serial.begin(9600);
  hc12.begin(9600);
  Serial.println("Starting HC12 receiver");
}
void loop() { 
  if (hc12.available()) {
    Serial.write(hc12.read());
  }
  if (Serial.available()) {
    hc12.write(Serial.read());
  }
}