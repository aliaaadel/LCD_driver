################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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
LSS += \
LCD_4bit.lss \

FLASH_IMAGE += \
LCD_4bit.hex \

EEPROM_IMAGE += \
LCD_4bit.eep \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: LCD_4bit.elf secondary-outputs

# Tool invocations
LCD_4bit.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LCD_4bit.map -mmcu=atmega32 -o "LCD_4bit.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LCD_4bit.lss: LCD_4bit.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LCD_4bit.elf  >"LCD_4bit.lss"
	@echo 'Finished building: $@'
	@echo ' '

LCD_4bit.hex: LCD_4bit.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex LCD_4bit.elf  "LCD_4bit.hex"
	@echo 'Finished building: $@'
	@echo ' '

LCD_4bit.eep: LCD_4bit.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex LCD_4bit.elf  "LCD_4bit.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LCD_4bit.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 LCD_4bit.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: LCD_4bit.elf
	@echo 'Invoking: AVRDude'
	D:\apps_files\WinAVR\bin\avrdude -pm32 -cusbasp -Uflash:w:LCD_4bit.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LCD_4bit.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
