#include <dht11.h>
#define DHT11PIN A1

dht11 DHT11;

void setup(){
  Serial.begin(9600);
}
void loop()
{

  Serial.println();
  int ch=DHT11.read(DHT11PIN);

  Serial.print("HUMIDITY (%):");
  Serial.println((float)DHT11.humidity,2);
   Serial.print("TEMPERATURE (C):");
  Serial.println((float)DHT11.temperature,2);
  delay(1000);
}
