#include <Servo.h>

const int SERVO = 10;
Servo servo;
void setup() {
  servo.attach(SERVO);
}

void loop() {
  servo.write(180);
  servo.write(0);
  servo.detach();
}
