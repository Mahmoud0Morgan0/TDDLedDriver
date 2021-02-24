/*
 * LedDriver.c
 *
 *  Created on: Feb 23, 2021
 *      Author: IT
 */
#include "LedDriver.h"


unsigned int *ledAddress;
static unsigned int ledsImage;

static unsigned int convertLedNumberToBit(int ledNumber)
{
	return 1<<(ledNumber-1);
}
static void updateHardware(void)
{
	*ledAddress=ledsImage;
}
void ledDriverCreate(unsigned int *leds )
{
	ledAddress = leds;
	ledsImage=0;
	*ledAddress=ledsImage;
}


void ledDriverTurnOn(int ledNumber)
{
	if(ledNumber<=0 || ledNumber>16)
	{
		return ;
	}
	ledsImage |=convertLedNumberToBit(ledNumber);
	updateHardware();
}
void ledDriverTurnOff(int ledNumber)
{
	if(ledNumber<=0 || ledNumber>16)
	{
		return ;
	}
	ledsImage &=~ convertLedNumberToBit(ledNumber);
	updateHardware();
}

void ledDriverAllOn(void)
{
	ledsImage = 0xffff;
	updateHardware();
}
