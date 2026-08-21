#include "MCUTools/CrcAlgorithm.h"

uint8_t crc8_calculate(uint8_t* data, size_t size, uint8_t crcStartValue, uint8_t polynom){
    uint8_t crc = crcStartValue;

    for (size_t byteId = 0; byteId < size; byteId++)
    {
        crc ^= data[byteId];
        for (size_t bit = 0; bit < 8; bit++)
        {
            if (crc & 0x80)
            {
                crc = (crc << 1) ^ polynom;
            }
            else {
                crc <<= 1;
            }
        }
    }
    
    return crc;
}

uint8_t crc8_DallasMaxim(uint8_t* data, size_t size)
{
    return crc8_calculate(data, size, 0, 0x31);
}