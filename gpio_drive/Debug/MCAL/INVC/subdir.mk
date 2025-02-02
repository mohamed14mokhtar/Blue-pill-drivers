################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/INVC/NVIC_prog.c 

OBJS += \
./MCAL/INVC/NVIC_prog.o 

C_DEPS += \
./MCAL/INVC/NVIC_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/INVC/%.o MCAL/INVC/%.su MCAL/INVC/%.cyclo: ../MCAL/INVC/%.c MCAL/INVC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"F:/ARM_projects/gpio_drive/HAL" -I"F:/ARM_projects/gpio_drive/LIB" -I"F:/ARM_projects/gpio_drive/MCAL" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-MCAL-2f-INVC

clean-MCAL-2f-INVC:
	-$(RM) ./MCAL/INVC/NVIC_prog.cyclo ./MCAL/INVC/NVIC_prog.d ./MCAL/INVC/NVIC_prog.o ./MCAL/INVC/NVIC_prog.su

.PHONY: clean-MCAL-2f-INVC

