//Raspberry Pi power down code
//Used with ATtiny85 to preserve power when only intermittent operation is needed

unsigned long currentMillis = millis();
unsigned long previousMillis = millis();
unsigned long onInterval = 150000; //on for 2:30 for powerup, 90 second process, and shutdown
unsigned long offInterval = 10000; //stay off for 10 seconds in testing, modify either delay as needed

void setup() {
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  currentMillis = millis();
  if (currentMillis - previousMillis >= (offInterval + onInterval)) {
    digitalWrite(2, HIGH);
    previousMillis = millis();
  }
  else if (currentMillis - previousMillis >= onInterval) {
    digitalWrite(2, LOW);
  }
}
