# ArduCommander
This is the source code for arduino to communicate between ArduCommander app and Arduino vai bluetooth.

```c
void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
}

void loop() {   // run over and over
  String msg = "";

  if (Serial.available() > 0) {
    while (Serial.available() > 0) {
      msg += char(Serial.read());
      delay(100);
    }
    // Print the message received from your phone:
    Serial.println(msg);
  }
}
