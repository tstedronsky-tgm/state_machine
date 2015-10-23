################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../startup/startup_stm32f303xc.s 

OBJS += \
./startup/startup_stm32f303xc.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo %cd%
	arm-none-eabi-as -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib" -I"E:/TGM/5Klasse/SYT/Weiser/state_machine/inc" -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/CMSIS/core" -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/CMSIS/device" -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/HAL_Driver/Inc" -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/Utilities/Components/Common" -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/Utilities/Components/l3gd20" -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/Utilities/Components/lsm303dlhc" -I"E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/Utilities/STM32F3-Discovery" -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


