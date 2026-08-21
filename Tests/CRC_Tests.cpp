#include <gtest/gtest.h>
#include "MCUTools/CrcAlgorithm.h"


TEST(CRC, SingleByte)
{
    uint8_t byte = 0xDC;
    uint8_t validCrc = 0x79;

    EXPECT_EQ(crc8_DallasMaxim(&byte, 1), validCrc);
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
        uint8_t calculated = crc8_DallasMaxim(validMessages + 3 * i, 2);
        uint8_t expected = validMessages[2 + i * 3 ];

        EXPECT_EQ(calculated, expected);
    }
}