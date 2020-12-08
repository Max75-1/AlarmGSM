################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include Drivers/STM32L1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
AlarmGSM_GPIO+USART_stm32l152re_project.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
AlarmGSM_GPIO+USART_stm32l152re_project.list \

OBJCOPY_BIN += \
AlarmGSM_GPIO+USART_stm32l152re_project.bin \


# All Target
all: AlarmGSM_GPIO+USART_stm32l152re_project.elf secondary-outputs

# Tool invocations
AlarmGSM_GPIO+USART_stm32l152re_project.elf: $(OBJS) $(USER_OBJS) C:\Users\telar\Desktop\Elektronika_Samoobrazovanue\CubeIDEprojects\AlarmGSM\STM32L152RETX_FLASH.ld
	arm-none-eabi-gcc -o "AlarmGSM_GPIO+USART_stm32l152re_project.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\telar\Desktop\Elektronika_Samoobrazovanue\CubeIDEprojects\AlarmGSM\STM32L152RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="AlarmGSM_GPIO+USART_stm32l152re_project.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

AlarmGSM_GPIO+USART_stm32l152re_project.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "AlarmGSM_GPIO+USART_stm32l152re_project.list"
	@echo 'Finished building: $@'
	@echo ' '

AlarmGSM_GPIO+USART_stm32l152re_project.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "AlarmGSM_GPIO+USART_stm32l152re_project.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
