//#include <EEPROM.h>
#include "dht.h"
#define dht_apin A0
dht DHT;

String value;
String value1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() 
{
    DHT.read11(dht_apin);
    Serial.println(DHT.humidity);
    Serial.print("%  ");
    Serial.println(DHT.temperature); 
    Serial.print("C  ");
    delay(500);
}
