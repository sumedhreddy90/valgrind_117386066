/** 
 *  @file    main.cpp
 *  @author  Sumedh Reddy Koppula
 *  @copyright MIT Licence
 *  @brief main method for Gtest
 *  @section DESCRIPTION
 *  A program to understand working of valgrind.
 */
#include <gtest/gtest.h>
/**
*	@brief  main method
*	@param	None
*	@return int 0
*/
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
