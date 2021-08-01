int PIRsensor = 2;
int buzzer = 10;
int thief = 0;
void setup() {
  Serial.begin(9600);
  pinMode(PIRsensor, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  thief = digitalRead(PIRsensor); // read input value
  Serial.println(thief);
  if(thief == 1){
    Serial.write("Buzzing\n");
    digitalWrite(buzzer, HIGH);
    delay(2000);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }else{
    Serial.write("Stop\n");
    digitalWrite(buzzer, LOW);
  }

}
