/*
 * LedDriverTest.h
 *
 *  Created on: Feb 23, 2021
 *      Author: IT
 */

#ifndef LEDDRIVERTEST_LEDDRIVERTEST_H_
#define LEDDRIVERTEST_LEDDRIVERTEST_H_

void test_LedsOffAfterCreate(void);
void test_turnLedOn(void);
void test_turnLedOff(void);
void test_turnMultipleLed(void);
void test_turnOffAnyLed(void);
void test_AllOn(void);
void test_LedMemIsNotReadable(void);
void test_BoundaryCondition(void);
void test_outOfBoundsTurnOnChangeNothing();
void test_outOfBoundsTurnOffChangeNothing();
#endif /* LEDDRIVERTEST_LEDDRIVERTEST_H_ */
