const int ledPin = 23;
const int tchPin = 4;

const int Threshold = 20;

int touchValue;

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(ledPin, OUTPUT);

}

void loop() {
  touchValue = touchRead(tchPin);
  Serial.print(touchValue);

  if(touchValue<Threshold){
    digitalWrite(ledPin, HIGH);
    Serial.println("LED On");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }

}
