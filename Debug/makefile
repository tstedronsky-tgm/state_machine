################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: state_machine.elf

dependents:
	-cd E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/Debug && $(MAKE) clean all

# Tool invocations
state_machine.elf: $(OBJS) $(USER_OBJS) E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/Debug/libstm32f3discovery_hal_lib.a
	@echo 'Building target: $@'
	@echo 'Invoking: MCU GCC Linker'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -L"E:\TGM\5Klasse\SYT\Weiser\stm32f3discovery_hal_lib\Debug" -T"E:\TGM\5Klasse\SYT\Weiser\state_machine\LinkerScript.ld" -Wl,-Map=output.map -Wl,--gc-sections -lm -o "state_machine.elf" @"objects.list" $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	-@echo 'Generating binary and Printing size information:'
	arm-none-eabi-objcopy -O binary "state_machine.elf" "state_machine.bin"
	arm-none-eabi-size "state_machine.elf"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build
E:/TGM/5Klasse/SYT/Weiser/stm32f3discovery_hal_lib/Debug/libstm32f3discovery_hal_lib.a:

-include ../makefile.targets
