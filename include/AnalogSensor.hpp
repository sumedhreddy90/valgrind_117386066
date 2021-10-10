/** 
 *  @file    AnalogSensor.hpp
 *  @author  Sumedh Reddy Koppula
 *  @copyright MIT Licence
 *  @brief  defining AnalogSensor class with 
 *  its members
 *  @section DESCRIPTION
 *  
 */
#pragma once

#include <iostream>
/**
*	@brief Class AnalogSensor
*	@param int Number of samples
*	@return None
*/
class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
