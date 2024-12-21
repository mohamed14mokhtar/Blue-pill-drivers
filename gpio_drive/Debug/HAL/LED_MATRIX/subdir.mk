################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LED_MATRIX/MATRIX_program.c 

OBJS += \
./HAL/LED_MATRIX/MATRIX_program.o 

C_DEPS += \
./HAL/LED_MATRIX/MATRIX_program.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LED_MATRIX/%.o HAL/LED_MATRIX/%.su HAL/LED_MATRIX/%.cyclo: ../HAL/LED_MATRIX/%.c HAL/LED_MATRIX/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"F:/ARM_projects/gpio_drive/HAL" -I"F:/ARM_projects/gpio_drive/LIB" -I"F:/ARM_projects/gpio_drive/MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HAL-2f-LED_MATRIX

clean-HAL-2f-LED_MATRIX:
	-$(RM) ./HAL/LED_MATRIX/MATRIX_program.cyclo ./HAL/LED_MATRIX/MATRIX_program.d ./HAL/LED_MATRIX/MATRIX_program.o ./HAL/LED_MATRIX/MATRIX_program.su

.PHONY: clean-HAL-2f-LED_MATRIX

