#pragma once

#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif




/// @brief Calculate CRC for present data
/// @param data 
/// @param size 
/// @param crcStartValue 
/// @param polynom 
/// @return 
uint8_t crc8_calculate(uint8_t* data, size_t size, uint8_t crcStartValue, uint8_t polynom);

uint8_t crc8_DallasMaxim(uint8_t* data, size_t size);


#ifdef __cplusplus
}
#endif