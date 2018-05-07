#include <Servo.h>
Servo servo;
int angle = 0;
int potent = A0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  angle = analogRead(potent);
  angle = map(angle,0,1023,0,180);
  servo.write(angle);
}
