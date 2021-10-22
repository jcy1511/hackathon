#include <Servo.h>

const int SERVO = 10;
Servo servo;
void setup() {
  servo.attach(SERVO);
}

void loop() {
  int angle=0;
  for(angle=0;angle<=180;angle++){
    servo.write(angle);
    delay(5);
  }
  for(angle=180;angle>=0;angle--) {
    servo.write(angle);
    delay(5);
  }
  servo.detach();
}
