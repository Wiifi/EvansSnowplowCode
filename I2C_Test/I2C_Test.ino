#include <Wire.h>

int sensorValue = 0;
String strValue;

void setup() {
  Wire.begin(5);
  Wire.onRequest(requestEvent);
  Serial.begin(38400);
}

void loop() {
  delay(100);
}

void requestEvent() {
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  strValue = String(sensorValue);
  Serial.println(sensorValue);
  Wire.write(sensorValue);
}
