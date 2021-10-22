int sw1 = 12;
int led = 10;
int t;
 
void setup() {
  pinMode(led, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  //sw를 인풋_풀업으로 하여 스위치가 열려있다면 HIGH
  //스위치가 닫혀있다면 LOW값을 반환
  digitalWrite(led, HIGH);
  t = 1;
}

void ledTurn() {
  if (t==0) {
    digitalWrite(led,HIGH);
    t = 1;
  } else if (t==1) {
      digitalWrite(led,LOW);
      t = 0;
  }
}
 
void loop() {
  if(digitalRead(sw1) == LOW) //스위치가 눌리면
    ledTurn(); //led On
    delay(100);
}

