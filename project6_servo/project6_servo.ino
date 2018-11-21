#include <Servo.h>

const int SERVO = 9;
const int POT = 0;

int potVal = 0;
Servo myServo;

void setup() {
  myServo.attach(SERVO);
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(POT);
  Serial.println(potVal);
  potVal = map(potVal, 0, 1023, 0, 179);
  myServo.write(potVal);
  delay(15);
}
