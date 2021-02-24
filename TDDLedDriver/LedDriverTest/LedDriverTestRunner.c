/*
 * LedDriverTestRunner.c
 *
 *  Created on: Feb 23, 2021
 *      Author: IT
 */

#include "LedDriverTest.h"
#include "unity.h"
void testRunner(void)
{
	RUN_TEST(test_LedsOffAfterCreate);
	RUN_TEST(test_turnLedOn);
	RUN_TEST(test_turnLedOff);
	RUN_TEST(test_turnMultipleLed);
	RUN_TEST(test_turnOffAnyLed);
	RUN_TEST(test_AllOn);
	RUN_TEST(test_LedMemIsNotReadable);
	RUN_TEST(test_BoundaryCondition);
	RUN_TEST(test_outOfBoundsTurnOnChangeNothing);
	RUN_TEST(test_outOfBoundsTurnOffChangeNothing);
}

int main (void)
{
	UNITY_BEGIN();
	testRunner();
	return UNITY_END();
}
