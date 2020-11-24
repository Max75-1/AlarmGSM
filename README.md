# AlarmGSM

This is an amateur GSM home alarm system project. This project uses the Nucleo-L152RE board and the SIM808 GPRS/GSM-GPS shield.
In the project also used a magnetic sensor and a buzzer. In the moment the magnetic sensor is opened, the buzzer is triggered and the interrupt handler launches SMSTask, 
which sends sms to the specified cell phone number.

The interrupt handler that calls SMSTask is in the file stm32l1xx_it.c in the TIM6_IRQHandler function. 
In fact, the project code is in three files - main.c, stm32l1xx_it.c and SMSTask.c
