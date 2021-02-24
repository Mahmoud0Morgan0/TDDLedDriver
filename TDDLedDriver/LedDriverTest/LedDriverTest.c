/*
 * LedDriverTest.c
 *
 *  Created on: Feb 23, 2021
 *      Author: IT
 */
#include"unity.h"
#include"../LedDriverProduction/LedDriver.h"


unsigned int virtual_leds = 0xffff;
void setUp(void)
{
	ledDriverCreate(&virtual_leds);
}
void tearDown(void)
{

}

void test_LedsOffAfterCreate()
{
	virtual_leds=0xffff;
	ledDriverCreate(&virtual_leds);
	TEST_ASSERT_EQUAL_HEX16(0,virtual_leds);
}
void test_turnLedOn()
{
	ledDriverTurnOn(1);
	TEST_ASSERT_EQUAL_HEX16(1,virtual_leds);
}
void test_turnLedOff()
{
	ledDriverTurnOn(1);
	ledDriverTurnOff(1);
	TEST_ASSERT_EQUAL_HEX16(0,virtual_leds);
}
void test_turnMultipleLed()
{
	ledDriverTurnOn(8);
	ledDriverTurnOn(9);
	TEST_ASSERT_EQUAL_HEX16(0x0180,virtual_leds);
}

void test_turnOffAnyLed()
{
	ledDriverTurnOn(8);
	ledDriverTurnOn(9);
	ledDriverTurnOff(8);
	TEST_ASSERT_EQUAL_HEX16(0x0100,virtual_leds);
}

void test_AllOn()
{
	ledDriverAllOn();
	TEST_ASSERT_EQUAL_HEX16(0xffff,virtual_leds);
}
void test_LedMemIsNotReadable()
{
	virtual_leds=0xffff;
	ledDriverTurnOn(8);
	TEST_ASSERT_EQUAL_HEX16(0x80,virtual_leds);
}
void test_BoundaryCondition()
{
	ledDriverTurnOn(1);
	ledDriverTurnOn(16);
	TEST_ASSERT_EQUAL_HEX16(0x8001,virtual_leds);
}
void test_outOfBoundsTurnOnChangeNothing()
{
	ledDriverTurnOn(-1);
	ledDriverTurnOn(0);
	ledDriverTurnOn(17);
	ledDriverTurnOn(3120);
	TEST_ASSERT_EQUAL_HEX16(0,virtual_leds);
}
void test_outOfBoundsTurnOffChangeNothing()
{
	ledDriverAllOn();
	ledDriverTurnOff(-1);
	ledDriverTurnOff(0);
	ledDriverTurnOff(17);
	ledDriverTurnOff(3120);
	TEST_ASSERT_EQUAL_HEX16(0xffff,virtual_leds);
}
