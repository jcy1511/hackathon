#include <SoftwareSerial.h>
#include <Servo.h>
#define BT_RXD 7
#define BT_TXD 8

const int SERVO = 10;
Servo servo;
SoftwareSerial bluetooth(BT_TXD, BT_RXD);


void setup(){
  Serial.begin(9600);
  bluetooth.begin(9600);
  servo.attach(SERVO);
  servo.write(0);
}

void turn(){
  int angle = 0;
  for(angle=0;angle<=60;angle++){
    servo.write(angle);
    delay(5);
  }
  for(angle=60;angle>=0;angle--) {
    servo.write(angle);
    delay(5);
  }
}



void loop(){
  if (bluetooth.available()) {
    String r = bluetooth.readStringUntil('\n');
    r.trim();
    if (r=="turn"){
      turn();
     }
    Serial.print(r);
  }
}
