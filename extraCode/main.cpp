#include <Arduino.h>
void setup () {
    Serial.begin(9600);

}

void loop () {

    for(int i = 0; i < 10; i++) {
        Serial.print('i = ');
        
    }
    delay(1000);
}