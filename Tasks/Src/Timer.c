
#include "Timer.h"
#include "main.h"
#include "tim.h" 
#include "iwdg.h"

volatile uint32_t tick = 0;

void Timer_Init(void)
{
  HAL_TIM_Base_Start_IT(&htim2);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM2)
    {
        tick++;
    }
}