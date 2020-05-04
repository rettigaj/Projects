#include <Arduino.h>
    // the setup function runs once when you press reset or power the board
    int count = 0;
    void setup() {
      // initialize digital pin 13 as an output.
      pinMode(13, OUTPUT);
    Serial.begin(9600); // open the serial port at 9600 bps:  
    


    }
    
     
     //the loop function runs over and over again forever
    void loop() {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(2000);              // wait for a second
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(2000);              // wait for a second
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(500);              // wait for a second
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(500);  
      Serial.print("hello world ");
      count = count + 1;
      Serial.println(' ' + count + ' ');
    }


//void loop() {
//          for (int i = 0; i < 10; i++) {
//      Serial.print("i = ");
//      Serial.println(i);
//        }
//      delay (1000);  
//      }
//void loop() {
//  int x = 1;
//  for (int i = 0; i > -1; i = i + x) {
//    pinMode(13, i);
//    if (i == 255) {
//      x = -1;  // switch direction at peak
//    }
//    delay(100);
//  }
//}