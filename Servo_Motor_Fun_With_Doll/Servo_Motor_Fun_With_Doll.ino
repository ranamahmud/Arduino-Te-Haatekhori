#include <Servo.h>
Servo myservo;
int i;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0; i<= 180; i++){
    myservo.write(i);
    delay(50);
  }
}
