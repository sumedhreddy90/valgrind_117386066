/** 
 *  @file    AnalogSensor.cpp
 *  @author  Sumedh Reddy Koppula
 *  @copyright MIT Licence
 *  @brief File to initialize AnalogSensor class with 
 *  its members
 *  
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>
/**
*	@brief Constructor for the AnalogSensor class
*	@param int Number of samples
*	@return None 
*/
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}
/**
*	@brief Destructor for the AnalogSensor class
*	@param None
*	@return None 
*/
AnalogSensor::~AnalogSensor() {
}
/**
*	@brief Read function which returns the average  of samples
*	@param Nome
*	@return int Result
*/
int AnalogSensor::Read() {
    std::shared_ptr<std::vector<int>> readings =
    std::make_shared< std::vector<int>> (mSamples, 10);
    double result = std::accumulate(readings->begin(),
    readings->end(), 0.0) / readings->size();
    return result;
}


