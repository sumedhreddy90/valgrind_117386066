/** 
 *  @file    test.cpp
 *  @author  Sumedh Reddy Koppula
 *  @copyright MIT Licence
 *  @brief test class and its methods
 *  @section DESCRIPTION
 *  A program to understand working of valgrind.
 */
#include <gtest/gtest.h>
#include <AnalogSensor.hpp>
/**
*	@brief  Test case to test Analog sensor
*	        passing build if read() returns 10
*/
TEST(test, test_sensor) {
  AnalogSensor obj(5);
  ASSERT_EQ(10, obj.Read());
}
