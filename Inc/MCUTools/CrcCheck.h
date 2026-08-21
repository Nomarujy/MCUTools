#pragma once


#include "stdbool.h"
#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Calculate CRC from present bytes
/// @param data 
/// @param size length of data
/// @param crcStartValue start value for CRC
/// @return CRC value
uint8_t crc8_calculate(uint8_t* data, size_t size, uint8_t crcStartValue);


/// @brief Compare CRC with calculated.
/// @param data 
/// @param size length of data
/// @param crcStartValue start value for CRC
/// @param crc CRC to compare with calculated
/// @return True if CRC Equal with calculated
bool crc8_validate(uint8_t* data, size_t size, uint8_t crcStartValue, uint8_t crc);



#ifdef __cplusplus
}
#endif