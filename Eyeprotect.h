/* 
   Eyeprotect.h - Library for protect the eyes code.
   Creater by Jasper005 November 24, 2016.
   Released into the public domain.
*/

#ifndef Eyeprotect_h
#define Eyeprotect_h

#include "Arduino.h"

class Eyeprotect
{
	public:
		eyeprotect(int pin);
		eyeprotect1(int pin1);
		eyeprotect2(int pin2);
		void distance();
		void light();
	private:
		int _pin;
		int _pin1;
		int _pin2;
};

#endif
