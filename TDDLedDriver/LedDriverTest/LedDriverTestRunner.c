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
}

int main (void)
{
	UNITY_BEGIN();
	testRunner();
	return UNITY_END();
}
