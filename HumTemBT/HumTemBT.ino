#include <SoftwareSerial.h>
#include <DHT.h>
#define DHTPIN 2               // 핀설정
#define DHTTYPE DHT22      // DHT type
DHT dht(DHTPIN, DHTTYPE);
#define BT_RXD 8
#define BT_TXD 7
SoftwareSerial bluetooth(BT_TXD, BT_RXD);
 
void setup(){
  Serial.begin(9600);
  bluetooth.begin(9600);
}
 
void loop(){
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  bluetooth.print(h);
  bluetooth.print(t);
  delay(2000);
}
