#include "DHT.h"
#define DHTPIN 2 //digital pin connected to the DHT sensor
#define DHTTYPE DHT11  //DHT 11
//#define DHTTYPE DHT22  //DHT 22 (AM2302),AM2321
//#define DHTTYPE DHT21  //DHT 21 (AM2301)

DHT dht (DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print(F("DHTxx test!"));

dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

float h = dht.readHumidity();

float t=dht.readTemperature();

if(isnan(h) || isnan(t))
{
  Serial.println(F("failed to read from DHT sensor!"));
  return;
}

Serial.println(F("Humidity:"));
Serial.print(h);
Serial.println(F("% Temperature:"));
Serial.print(t);

Serial.println(F("C"));
}
