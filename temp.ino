// This #include statement was automatically added by the Particle IDE.
#include <DHT.h>

#define DHTPIN D2

DHT dht(DHTPIN, DHT22);


float temp;


void setup() {
    pinMode(D2, OUTPUT);
    dht.begin();
}

void loop() {
    
    float temp = dht.readTemperature(); // Gets the values of the temperature

    Particle.publish("temp", String(temp), PRIVATE);
    delay(30000); 
}
