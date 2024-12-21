################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/KPD/KPD_prog.c \
../HAL/KPD/LCD_prog.c 

OBJS += \
./HAL/KPD/KPD_prog.o \
./HAL/KPD/LCD_prog.o 

C_DEPS += \
./HAL/KPD/KPD_prog.d \
./HAL/KPD/LCD_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/KPD/%.o HAL/KPD/%.su HAL/KPD/%.cyclo: ../HAL/KPD/%.c HAL/KPD/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"F:/ARM_projects/gpio_drive/HAL" -I"F:/ARM_projects/gpio_drive/LIB" -I"F:/ARM_projects/gpio_drive/MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-KPD

clean-HAL-2f-KPD:
	-$(RM) ./HAL/KPD/KPD_prog.cyclo ./HAL/KPD/KPD_prog.d ./HAL/KPD/KPD_prog.o ./HAL/KPD/KPD_prog.su ./HAL/KPD/LCD_prog.cyclo ./HAL/KPD/LCD_prog.d ./HAL/KPD/LCD_prog.o ./HAL/KPD/LCD_prog.su

.PHONY: clean-HAL-2f-KPD

