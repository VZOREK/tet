/**
 * @file BlackBox_pinout.hpp
 * @author Tomáš Rohlínek (haberturdeur)
 * \~czech @brief pinout desky BlackBox
 * \~english @brief pinout of BlackBox board
 */

#pragma once

#include "driver/gpio.h"

namespace BlackBox {

struct PowerPin {
    gpio_num_t pinNumber;
    bool onLevel; /*!< Level needed to put the thing which this pin controls to On state */
    bool defaultLevel; /*!< Default state of the pin as dictated by pull resistors on board */
};

namespace Pins {
namespace Leds {
constexpr gpio_num_t Data = GPIO_NUM_19;
} // namespace BlackBox::Pins::Leds

namespace Sound {
constexpr gpio_num_t Piezo = GPIO_NUM_21;
} // namespace BlackBox::Pins::Sound

namespace I2C {
constexpr gpio_num_t SCL = GPIO_NUM_22;
constexpr gpio_num_t SDA = GPIO_NUM_23;
} // namespace BlackBox::Pins::I2C

namespace UART {
constexpr gpio_num_t TX = GPIO_NUM_1;
constexpr gpio_num_t RX = GPIO_NUM_3;
} // namespace BlackBox::Pins::UART

namespace A9 {
constexpr gpio_num_t TX = GPIO_NUM_33;
constexpr gpio_num_t RX = GPIO_NUM_32;
} // namespace BlackBox::Pins::A9

namespace Interrupts {
constexpr gpio_num_t RTC = GPIO_NUM_26;

constexpr gpio_num_t MPU = GPIO_NUM_34; // gyroscope and accelerometer

} // namespace BlackBox::Pins::Interrupts

namespace Lock {
constexpr gpio_num_t Motor = GPIO_NUM_12;

constexpr gpio_num_t IsUSBConnected = GPIO_NUM_36;

constexpr gpio_num_t Servo0 = GPIO_NUM_27;
constexpr gpio_num_t Servo1 = GPIO_NUM_25;
constexpr gpio_num_t Servo2 = GPIO_NUM_13;
constexpr gpio_num_t Servo3 = GPIO_NUM_2;

constexpr gpio_num_t TamperCheck0 = GPIO_NUM_4;
constexpr gpio_num_t TamperCheck1 = GPIO_NUM_15;
constexpr gpio_num_t TamperCheck2 = GPIO_NUM_0;
constexpr gpio_num_t TamperCheck3 = GPIO_NUM_35;
} // namespace BlackBox::Pins::Lock

namespace Power {
constexpr PowerPin PowerAll = {
    .pinNumber = GPIO_NUM_5,
    .onLevel = 1,
    .defaultLevel = 1,
};
constexpr PowerPin Power5V = {
    .pinNumber = GPIO_NUM_14,
    .onLevel = 0,
    .defaultLevel = 1,
};
constexpr PowerPin PowerLDC = {
    .pinNumber = GPIO_NUM_18,
    .onLevel = 0,
    .defaultLevel = 0,
};

constexpr gpio_num_t BatteryLevel = GPIO_NUM_39;
} // namespace BlackBox::Pins::Power

} // namespace BlackBox::Pins
} // namespace BlackBox

namespace Lantern {
namespace Pins
{
struct DoorPin {
    gpio_num_t servo;
    gpio_num_t tamperCheck;
};

constexpr DoorPin Door[4] = {
    {
        .servo = Servo0,
        .tamperCheck = TamperCheck0,
    },
    {
        .servo = Servo1,
        .tamperCheck = TamperCheck1,
    },
    {
        .servo = Servo2,
        .tamperCheck = TamperCheck2,
    },
    {
        .servo = Servo3,
        .tamperCheck = TamperCheck3,
    },
};
} // namespace Lantern::Pins
} // namespace Lantern