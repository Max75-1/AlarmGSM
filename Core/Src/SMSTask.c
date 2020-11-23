#include "main.h"

extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;

void prvSMSTask   ( void *pvParameters )
{
char uartbuf[100];

	vTaskSuspend(NULL);

  	memset(uartbuf,'\0',100*sizeof(char));
  	HAL_UART_Transmit(&huart1,"AT\r\n",4,400);
  	HAL_UART_Receive(&huart1,(uint8_t *)uartbuf,100,400);
  	HAL_UART_Transmit(&huart2,(uint8_t *)uartbuf,100,400);

  	memset(uartbuf,'\0',100*sizeof(char));
	HAL_UART_Transmit(&huart1,"AT+CSCS=\"GSM\"\r\n",15,400);
	HAL_UART_Receive(&huart1,(uint8_t *)uartbuf,100,400);
	HAL_UART_Transmit(&huart2,(uint8_t *)uartbuf,100,400);

	memset(uartbuf,'\0',100*sizeof(char));
	HAL_UART_Transmit(&huart1,"AT+CMGF=1\r\n",11,400);
	HAL_UART_Receive(&huart1,(uint8_t *)uartbuf,100,400);
	HAL_UART_Transmit(&huart2,(uint8_t *)uartbuf,100,400);

	memset(uartbuf,'\0',100*sizeof(char));
	HAL_UART_Transmit(&huart1,"AT+CMGS=\"0523571795\"\r\n",23,400);
	HAL_UART_Receive(&huart1,(uint8_t *)uartbuf,100,400);
	HAL_UART_Transmit(&huart2,(uint8_t *)uartbuf,100,400);

	memset(uartbuf,'\0',100*sizeof(char));
	HAL_UART_Transmit(&huart1,"Alarm !!! Priza from STM32 !!!\r\n",32,400);
	HAL_UART_Receive(&huart1,(uint8_t *)uartbuf,100,400);
	HAL_UART_Transmit(&huart2,(uint8_t *)uartbuf,100,400);

	while (!(huart1.Instance->SR & 0x0080));
	huart1.Instance->SR & 0x0000;
	huart1.Instance->DR = 0x1A;    //sending CtrlZ command

	while(1){

	}
}
