/*
 * LedDriver.h
 *
 *  Created on: Feb 23, 2021
 *      Author: IT
 */

#ifndef LEDDRIVERPRODUCTION_LEDDRIVER_H_
#define LEDDRIVERPRODUCTION_LEDDRIVER_H_

void ledDriverCreate(unsigned int *leds);
void ledDriverTurnOn(int ledNumber);
void ledDriverTurnOff(int ledNumber);
void ledDriverAllOn(void);
#endif /* LEDDRIVERPRODUCTION_LEDDRIVER_H_ */
