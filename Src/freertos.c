/*! \brief definition of freertos task
 *  \author Shylock Hg
 *  \date 2018-06-10
 *  \email tcath2s@gmail.com
 * */

#include "stm32f7xx_hal.h"
#include "FreeRTOS.h"
#include "task.h"

void TaskBlink(void * args){
	(void)args;

	while(1){
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_1);
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}

