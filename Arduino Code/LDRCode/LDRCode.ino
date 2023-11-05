int sensorValue;

void setup() {
  Serial.begin(115200);
}

void loop() {
  sensorValue = analogReadA0;
  Serial.print(sensorValue, DEC);
  Serial.print(" \n");
  delay(1000);

}
//for example of board setup of LDR and resistor: http://www.esp32learning.com/code/esp32-and-ldr-example.php
