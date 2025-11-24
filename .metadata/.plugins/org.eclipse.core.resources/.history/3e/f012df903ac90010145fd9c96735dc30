################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../X2CCode/FlashTable.c \
../X2CCode/RamTable.c \
../X2CCode/X2C.c 

OBJS += \
./X2CCode/FlashTable.o \
./X2CCode/RamTable.o \
./X2CCode/X2C.o 

C_DEPS += \
./X2CCode/FlashTable.d \
./X2CCode/RamTable.d \
./X2CCode/X2C.d 


# Each subdirectory must supply rules for building sources it contributes
X2CCode/%.o X2CCode/%.su X2CCode/%.cyclo: ../X2CCode/%.c X2CCode/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G474xx -DSCOPE_SIZE=4096 -DUSER_VECT_TAB_ADDRESS -DX2C_STM32G474RE -DUSE_FULL_LL_DRIVER -c -I../Core/Inc -I../inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../X2CCode -I"C:/LCM/X2C/v6.4.2961/Library/General/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/Math/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/Control/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Controller/Driver/Serial" -I"C:/LCM/X2C/v6.4.2961/Controller/Protocol/LNet" -I"C:/LCM/X2C/v6.4.2961/Controller/CRC" -I"C:/LCM/X2C/v6.4.2961/Controller/Services" -I"C:/LCM/X2C/v6.4.2961/Controller/Common" -I"C:/LCM/X2C/v6.4.2961/Library/MotorControl/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/StateControl/Controller/inc" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-X2CCode

clean-X2CCode:
	-$(RM) ./X2CCode/FlashTable.cyclo ./X2CCode/FlashTable.d ./X2CCode/FlashTable.o ./X2CCode/FlashTable.su ./X2CCode/RamTable.cyclo ./X2CCode/RamTable.d ./X2CCode/RamTable.o ./X2CCode/RamTable.su ./X2CCode/X2C.cyclo ./X2CCode/X2C.d ./X2CCode/X2C.o ./X2CCode/X2C.su

.PHONY: clean-X2CCode

