/*
 * ************************************************
 *
 *              STM32 blink gcc demo
 *
 *  CPU: STM32F103C8
 *  PIN: PA1
 *
 * ************************************************
 */

#include "stm32f10x.h"
#include "OLED.h"
#include "CountSensor.h"
#include "Encoder.h"

int16_t Num = 0;

int main()
{
    // oled
    OLED_Init();
    // CountSensor_Init();
    Encoder_Init();

    OLED_ShowString(1, 1, "Num:");

    while (1) {
        // OLED_ShowNum(1, 7, CountSensor_GetCount(), 4);
        Num += Encoder_GetCount();

        OLED_ShowSignedNum(1, 5, Num, 4);
    }
}
