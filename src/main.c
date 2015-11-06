/**
  ******************************************************************************
  * @file    main.c
  * @author  Stedronsky Thomas
  * @version V1.0
  * @date    06-11-2015
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f3xx.h"
#include "stm32f3_discovery.h"
			
#include "led_toggle.h"

/*
 * main
 * @param void
 * @return 0 for Succes
 */
int main(void)
{
	SystemInit();
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock / 1000);

	BSP_LED_Init(LED_RED);
	BSP_LED_Init(LED_ORANGE);
	BSP_LED_Init(LED_GREEN_2);

	control_traffic_light();


	return 0;
}


