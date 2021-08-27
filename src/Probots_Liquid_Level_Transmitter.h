/*
  Probots_Liquid_Level_Transmitter.h - Library for submersible liquid sensor.
  Created by Abhishek.S @ probots Techno Solutions, August 24, 2021.

*/
#ifndef Probots_Liquid_Level_Transmitter_H
#define Probots_Liquid_Level_Transmitter_H

#include "Arduino.h"

class SubmersibleLiquidSensor
{
  public:
    SubmersibleLiquidSensor(int sensorPin, int sensorRange);
    float getLiquidLevel();
  private:
    int _sensorPin;
    int _sensorRange;
};
#endif
