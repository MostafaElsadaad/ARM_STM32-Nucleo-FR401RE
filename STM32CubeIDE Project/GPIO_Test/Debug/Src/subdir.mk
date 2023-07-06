################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/DMA_program.c \
../Src/NVIC_program.c \
../Src/RCC_prog.c \
../Src/STK_program.c \
../Src/main.c 

OBJS += \
./Src/DMA_program.o \
./Src/NVIC_program.o \
./Src/RCC_prog.o \
./Src/STK_program.o \
./Src/main.o 

C_DEPS += \
./Src/DMA_program.d \
./Src/NVIC_program.d \
./Src/RCC_prog.d \
./Src/STK_program.d \
./Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F401RE -DSTM32 -DSTM32F401RETx -DSTM32F4 -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/DMA_program.cyclo ./Src/DMA_program.d ./Src/DMA_program.o ./Src/DMA_program.su ./Src/NVIC_program.cyclo ./Src/NVIC_program.d ./Src/NVIC_program.o ./Src/NVIC_program.su ./Src/RCC_prog.cyclo ./Src/RCC_prog.d ./Src/RCC_prog.o ./Src/RCC_prog.su ./Src/STK_program.cyclo ./Src/STK_program.d ./Src/STK_program.o ./Src/STK_program.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su

.PHONY: clean-Src

