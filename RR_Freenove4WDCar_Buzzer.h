/*
  RR_Freenove4WDCar_Buzzer.h - Library for Arduino Buzzer.
  Created by Roman Rainov, Janaury 29, 2024.
  Released into the private domain.
*/
#ifndef RR_Freenove4WDCar_Buzzer_h
#define RR_Freenove4WDCar_Buzzer_h

#include "Arduino.h"

class RRFreenove4WDCarBuzzer
{
private:
	byte _pinBuzzer = A0;

public:
	RRFreenove4WDCarBuzzer();
	RRFreenove4WDCarBuzzer(byte pinBuzzer);
	float getBuzzerVoltage();
};

#endif