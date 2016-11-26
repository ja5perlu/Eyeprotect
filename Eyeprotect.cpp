/* 
   Eyeprotect.cpp - Library for protect the eyes code.
   Creater by Jasper005 November 24, 2016.
   Released into the public domain.
*/

#include "Arduino.h"
#include "Eyeprotect.h"

Eyeprotect::eyeprotect(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}
Eyeprotect::eyeprotect1(int pin1)
{
	pinMode(pin1, INPUT);
	_pin1 = pin1;
}
Eyeprotect::eyeprotect2(int pin2)
{
	pinMode(pin2, INPUT);
	_pin2 = pin2;
}
void Eyeprotect::distance()
{
    float duration, distance;

    digitalWrite(_pin, HIGH);
    delay(1);                        
    digitalWrite(_pin, LOW);
    duration = pulseIn (_pin1, HIGH);    
    distance = (duration/2)/29;         

    if(distance>=200||distance<=2){      
        Serial.print("[Out of range]                    ");    
    }
    else{
        Serial.print("distance = ");
    	Serial.print(distance);
    	Serial.print(" cm  ");
    	if(distance<=50){ 
     		if(distance<10)
      		Serial.print(" ");
      		Serial.print("[too close]  ");        
    	}else{
      	Serial.print("             ");
    	}
  	}
}
void Eyeprotect::light()
{
	float lighter;

  	lighter = analogRead(_pin2);
  	lighter = lighter/4.06;
  	if(lighter>=101||lighter<0){               
    	Serial.println("[Out of range]");    
  	}else{
  	Serial.print("light = ");
  	Serial.print(lighter);
  	Serial.print(" %   ");
  		if(lighter<=30){                               //too dark 
     		if(lighter<10)
      		Serial.print(" ");
      	Serial.print("[too dark]");        
    	}
  	Serial.println(" ");
  	}
}
