#include "stm32f3xx.h"
#include "stm32f3_discovery.h"

#include "led_toggle.h"

#include "state_machine.h"

void reset(){
	BSP_LED_Off(LED_RED);
	BSP_LED_Off(LED_ORANGE);
	BSP_LED_Off(LED_GREEN_2);
}

void led_red(){
	reset();
	BSP_LED_On(LED_RED);
	HAL_Delay(1000);
}

void led_red_orange(){
	reset();
	BSP_LED_On(LED_RED);
	BSP_LED_On(LED_ORANGE);
	HAL_Delay(1000);
}

void led_green(){
	reset();
	BSP_LED_On(LED_GREEN_2);
	HAL_Delay(2000);
}

void led_green_blink(){
	reset();
	int i=0;
	while(i<5){
		BSP_LED_On(LED_GREEN_2);
		HAL_Delay(400);
		BSP_LED_Off(LED_GREEN_2);
		HAL_Delay(400);
		i=i+1;
	}
}
void led_orange_blink(){
	reset();
	while(1){
		BSP_LED_On(LED_ORANGE);
		HAL_Delay(400);
		BSP_LED_Off(LED_ORANGE);
		HAL_Delay(400);
	}
}

void control_traffic_light(){
	while(1){
		led_red();
		led_red_orange();
		led_green();
		led_green_blink();
	}
}



