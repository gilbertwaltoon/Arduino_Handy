int adcPin = A0;  
int val;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(adcPin);
  Serial.print("adc reads = ");
  Serial.println(val);        //print digital value on serial monitor
  delay(1000);
}