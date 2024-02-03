/*
  RR_Freenove4WDCar_Buzzer.cpp - Library for Arduino Buzzer.
  Created by Roman Rainov, Janaury 29, 2024.
  Released into the private domain.
*/

#include "Arduino.h"
#include "RR_Freenove4WDCar_Buzzer.h"

RRFreenove4WDCarBuzzer::RRFreenove4WDCarBuzzer()
{
}

RRFreenove4WDCarBuzzer::RRFreenove4WDCarBuzzer(byte pinBuzzer)
{
	_pinBuzzer = pinBuzzer;
}

float RRFreenove4WDCarBuzzer::getBuzzerVoltage()
{
	pinMode(_pinBuzzer, INPUT);
	int BuzzerADC = analogRead(_pinBuzzer);
	float BuzzerVoltage = BuzzerADC / 1023.0 * 5.0 * 4; //V=ADCvalue/1023*5V. 
	return BuzzerVoltage;
}