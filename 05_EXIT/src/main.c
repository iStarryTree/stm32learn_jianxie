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

int main()
{
    // oled
    OLED_Init();
    OLED_ShowChar(1, 1, 'A');

    while (1) {
    }
}
