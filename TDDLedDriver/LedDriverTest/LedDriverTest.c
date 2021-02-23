/*
 * LedDriverTest.c
 *
 *  Created on: Feb 23, 2021
 *      Author: IT
 */
#include"unity.h"
#include"../LedDriverProduction/LedDriver.h"

void setUp(void)
{

}
void tearDown(void)
{

}

void test_LedsOffAfterCreate()
{
	unsigned int virtual_leds = 0xffff;
	ledDriverCreate(&virtual_leds);
	TEST_ASSERT_EQUAL_HEX16(0,virtual_leds);
}
