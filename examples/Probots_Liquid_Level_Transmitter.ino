
/***************************************************************************
  This library is designed for the Submersible Liquid Level Sensor

  These Submersible level transmitters consist of a sensor attached to a long cable, 
  which is then lowered to the bottom of the liquid vessel. The sensor operates 
  by measuring the hydrostatic pressure of the liquid medium. 
  Also known as head pressure, hydrostatic pressure is the pressure exerted by the 
  fluid in the vessel.

  Written by Abhishek.S for Probots Techno Solutions.

 ***************************************************************************/
#include <Probots_Liquid_Level_Transmitter.h>

SubmersibleLiquidSensor SLS = SubmersibleLiquidSensor(A0, 500); 

void setup() 
{
  // put your setup code here, to run once:

}

void loop()
{
  // put your main code here, to run repeatedly:
   Serial.println(SLS.getLiquidLevel());
}
