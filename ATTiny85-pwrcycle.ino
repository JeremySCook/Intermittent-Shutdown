//Raspberry Pi power down code
//Used with ATtiny85 to preserve power when only intermittent operation is needed

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);   // Pin 2 (relay) on
  delay(120000);           // Stay on 2:00 (120,000ms)
  digitalWrite(2, LOW);    // Pin 2 off
  delay(60000);            // powered off for 1:00 - would normally be longer
}
