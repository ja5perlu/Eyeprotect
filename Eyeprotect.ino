#include <Eyeprotect.h>

Eyeprotect eyeprotect(5);
Eyeprotect eyeprotect1(6);
Eyeprotect eyeprotect2(A1);

void setup() {
  Serial.begin(9600);       //baud
}

void loop() {
  distance();               //HC-SR04 Ultrasonic sensor
  light();                  //Light sensor V1.2
  Serial.println("-------------------------------------------------------------------");
  delay(1000);

}
