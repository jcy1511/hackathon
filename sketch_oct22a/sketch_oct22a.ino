#include <DHT.h>
#define DHTPIN 2               // 핀설정
#define DHTTYPE DHT22      // DHT type
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);            // 통신속도 설정
}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  Serial.print("humidity:");          // ‘시리얼 플로터’ 사용위해 이부분 주석 필요
  Serial.println(h);                  // 습도값 출력
  Serial.print("temperature:");       // ‘시리얼 플로터’ 사용위해 이부분 주석 필요
  Serial.println(t);                  // 온도값 출력
  delay(1000);
}
