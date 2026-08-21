#pragma once
#include "stdint.h"

typedef struct
{
    /// @brief return transmited bytes
    size_t (*transmit)(uint8_t data, size_t dataSize);

    /// @brief return recived bytes
    size_t (*recive)(uint8_t buffer, size_t bufferSize);
} CommunicationInterface;
