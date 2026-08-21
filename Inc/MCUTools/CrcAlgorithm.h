#pragma once

#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef uint8_t (*crc8_Func)(uint8_t* data, size_t size);

/// @brief Calculate CRC for present data
/// @param data 
/// @param size 
/// @param crcStartValue 
/// @param polynom 
/// @return
uint8_t crc8_calculate(uint8_t* data, size_t size, uint8_t crcStartValue, uint8_t polynom);

/// @brief Calculate crc with polynom 0x31 and start value 0x00
/// @param data 
/// @param size 
/// @return 
uint8_t crc8_DallasMaxim(uint8_t* data, size_t size);


#ifdef __cplusplus
}
#endif