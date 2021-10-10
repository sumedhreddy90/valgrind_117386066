/** 
 *  @file    main.cpp
 *  @author  Sumedh Reddy Koppula
 *  @copyright MIT Licence
 *  @brief Remove Valgrind errors
 *  @section DESCRIPTION
 *  A program to understand working of valgrind.
 */
#include <iostream>
#include <AnalogSensor.hpp>
/**
*	@brief  main method
*	@param	None
*	@return int 0
*/
int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator =
    (lightSensor.Read() > 0) ? true : false;
    // Avoiding memory leaks by defining the variable
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
