################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/src/subdir.mk
-include src/subdir.mk
-include Libraries/System_stm32f10x/src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECOUTPUTBUILDVAR += \
EXECUTABLES \


# All Target
all: Hello_Project.elf secondary-outputs

# Tool invocations
Hello_Project.elf: $(OBJS) $(USER_OBJS)
	arm-atollic-eabi-gcc -o "Hello_Project.elf" $(OBJS) $(USER_OBJS) $(LIBS) -mthumb -mcpu=cortex-m3 -T"../stm32_flash.ld" -specs=nosys.specs -static -Wl,-cref,-u,Reset_Handler "-Wl,-Map=Hello_Project.map" -Wl,--gc-sections -Wl,--defsym=malloc_getpagesize_P=0x80 -Wl,--start-group -lc -lm -Wl,--end-group -specs=nano.specs

EXECUTABLES: Hello_Project.elf $(EXECUTABLES)
	"C:\Program Files (x86)\Atollic\TrueSTUDIO for STM32 9.0.1\ide\jre\bin\java" -jar "C:\Program Files (x86)\Atollic\TrueSTUDIO for STM32 9.0.1\Tools\arm-atollic-reports.jar" convert-hex sizeinfo list Hello_Project.elf

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(SECOUTPUTBUILDVAR)$(OBJS)$(C_DEPS) Hello_Project.elf
	-@echo ' '

secondary-outputs: $(SECOUTPUTBUILDVAR)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
