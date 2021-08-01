int PIRsensor = 2;
int buzzer = 10;
int thief = 0;
void setup() {
  pinMode(PIRsensor, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  thief = digitalRead(PIRsensor); // read input value
  if(thief == 1){
    digitalWrite(buzzer, HIGH);
    delay(2000);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }else{
    digitalWrite(buzzer, LOW);
  }

}
