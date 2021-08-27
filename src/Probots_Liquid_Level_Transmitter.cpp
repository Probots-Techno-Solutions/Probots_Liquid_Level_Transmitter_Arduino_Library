/*
  Probots_Liquid_Level_Transmitter.cpp - Library for submersible liquid sensor.
  Created by Abhishek.S @ probots Techno Solutions, August 24, 2021.
*/

#include "Probots_Liquid_Level_Transmitter.h"

SubmersibleLiquidSensor::SubmersibleLiquidSensor(int sensorPin, int sensorRange) //SubmersibleLiquidSensor:: before the name of the function. This says that the function is part of the SubmersibleLiquidSensor class.
{
  pinMode(sensorPin, INPUT);
  _sensorPin = sensorPin;
  _sensorRange = sensorRange;
}
float SubmersibleLiquidSensor::getLiquidLevel()
{
  int adc = analogRead(_sensorPin);
  return map(adc, 0, 1023, 0, _sensorRange);
}
