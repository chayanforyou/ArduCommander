void setup() {
  Serial.begin(9600);
}

void loop() {
  String msg = "";

  if (Serial.available() > 0) {
    while (Serial.available() > 0) {
      msg += char(Serial.read());
      delay(100);
    }
    Serial.println(msg);
  }
}
