#include <gtest/gtest.h>
#include "MCUTools/CrcCheck.h"


TEST(CRC, SingleByte)
{
    uint8_t byte = 0xDC;
    uint8_t validCrc = 0x79;

    EXPECT_TRUE(crc8_validate(&byte, 1, 0, validCrc));
    EXPECT_FALSE(crc8_validate(&byte, 1, 0, validCrc - 1));
}

TEST(CRC, MultiplyByte)
{
    uint8_t validMessages[] = { 
        // data_0, data_1, CRC (valid)
        0x68, 0x3a, 0x7C,
        0x4E, 0x85, 0x6B
    };

    for (size_t i = 0; i < 2; i++)
    {
        EXPECT_TRUE(crc8_validate(validMessages + i * 3, 2, 0, validMessages[2 + i * 3]));

        EXPECT_FALSE(crc8_validate(validMessages + i * 3, 2, 0, 0));
    }
    
}