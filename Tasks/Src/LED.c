#include "LED.h"
#include "gpio.h"
#include "main.h"


void LED_Init(void)
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);

}

