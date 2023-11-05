0const int TRIG_PIN = 17;
  const int ECHO_PIN = 14;
  long duration;
  float cms, inches;
  void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  cms = (duration/2)/29.1;
  inches = (duration/2)/74;

  Serial.print("Distance from object in inches ");
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print("Distance from object in centimetres");
  Serial.print(cms);
  Serial.print("cm");
  Serial.println();

  delay(250);

}
