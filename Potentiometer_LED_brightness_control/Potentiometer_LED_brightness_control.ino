int potPin = A2;
int LEDPin = 13;
int value = 0;
void setup() {
  pinMode(LEDPin , OUTPUT);
}

void loop() {
  value = analogRead(potPin);
  analogWrite(LEDPin, value);
}
