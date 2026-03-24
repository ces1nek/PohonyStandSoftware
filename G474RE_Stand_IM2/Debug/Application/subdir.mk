################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/AppStand_im.c \
../Application/GlobalDefines.c \
../Application/Hardware.c \
../Application/ad2s1200_spi.c 

OBJS += \
./Application/AppStand_im.o \
./Application/GlobalDefines.o \
./Application/Hardware.o \
./Application/ad2s1200_spi.o 

C_DEPS += \
./Application/AppStand_im.d \
./Application/GlobalDefines.d \
./Application/Hardware.d \
./Application/ad2s1200_spi.d 


# Each subdirectory must supply rules for building sources it contributes
Application/%.o Application/%.su Application/%.cyclo: ../Application/%.c Application/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32G474xx -DSCOPE_SIZE=32768 -DUSER_VECT_TAB_ADDRESS -DX2C_STM32G474RE -DUSE_FULL_LL_DRIVER -DHSE_VALUE=24000000 -DHSE_STARTUP_TIMEOUT=100 -DLSE_STARTUP_TIMEOUT=5000 -DLSE_VALUE=32768 -DEXTERNAL_CLOCK_VALUE=12288000 -DHSI_VALUE=16000000 -DLSI_VALUE=32000 -DVDD_VALUE=3300 -DPREFETCH_ENABLE=0 -DINSTRUCTION_CACHE_ENABLE=1 -DDATA_CACHE_ENABLE=1 -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -I../Application -I../X2CCode -I"C:/LCM/X2C/v6.4.2961/Library/General/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/Math/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/Control/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Controller/Driver/Serial" -I"C:/LCM/X2C/v6.4.2961/Controller/Protocol/LNet" -I"C:/LCM/X2C/v6.4.2961/Controller/CRC" -I"C:/LCM/X2C/v6.4.2961/Controller/Services" -I"C:/LCM/X2C/v6.4.2961/Controller/Common" -I"C:/LCM/X2C/v6.4.2961/Library/MotorControl/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/StateControl/Controller/inc" -I"C:/LCM/X2C/v6.4.2961/Library/Filter/Controller/inc" -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application

clean-Application:
	-$(RM) ./Application/AppStand_im.cyclo ./Application/AppStand_im.d ./Application/AppStand_im.o ./Application/AppStand_im.su ./Application/GlobalDefines.cyclo ./Application/GlobalDefines.d ./Application/GlobalDefines.o ./Application/GlobalDefines.su ./Application/Hardware.cyclo ./Application/Hardware.d ./Application/Hardware.o ./Application/Hardware.su ./Application/ad2s1200_spi.cyclo ./Application/ad2s1200_spi.d ./Application/ad2s1200_spi.o ./Application/ad2s1200_spi.su

.PHONY: clean-Application

