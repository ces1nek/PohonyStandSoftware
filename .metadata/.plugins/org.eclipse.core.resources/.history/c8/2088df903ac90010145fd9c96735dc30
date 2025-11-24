################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/GlobalDefines.c \
../src/Hardware.c \
../src/ad2s1200_spi.c \
../src/app_stand_dcm.c 

OBJS += \
./src/GlobalDefines.o \
./src/Hardware.o \
./src/ad2s1200_spi.o \
./src/app_stand_dcm.o 

C_DEPS += \
./src/GlobalDefines.d \
./src/Hardware.d \
./src/ad2s1200_spi.d \
./src/app_stand_dcm.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o src/%.su src/%.cyclo: ../src/%.c src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -DSCOPE_SIZE=4096 -DUSER_VECT_TAB_ADDRESS -DX2C_STM32G474RE -DUSE_FULL_LL_DRIVER -c -I../Core/Inc -I../inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../X2CCode -I"C:/LCM/X2C/v6.4.2961/Library/General/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/Math/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/Control/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Controller/Driver/Serial" -I"C:/LCM/X2C/v6.4.2961/Controller/Protocol/LNet" -I"C:/LCM/X2C/v6.4.2961/Controller/CRC" -I"C:/LCM/X2C/v6.4.2961/Controller/Services" -I"C:/LCM/X2C/v6.4.2961/Controller/Common" -I"C:/LCM/X2C/v6.4.2961/Library/MotorControl/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/StateControl/Controller/inc" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-src

clean-src:
	-$(RM) ./src/GlobalDefines.cyclo ./src/GlobalDefines.d ./src/GlobalDefines.o ./src/GlobalDefines.su ./src/Hardware.cyclo ./src/Hardware.d ./src/Hardware.o ./src/Hardware.su ./src/ad2s1200_spi.cyclo ./src/ad2s1200_spi.d ./src/ad2s1200_spi.o ./src/ad2s1200_spi.su ./src/app_stand_dcm.cyclo ./src/app_stand_dcm.d ./src/app_stand_dcm.o ./src/app_stand_dcm.su

.PHONY: clean-src

