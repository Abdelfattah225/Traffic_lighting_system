################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/main.c 

OBJS += \
./App/main.o 

C_DEPS += \
./App/main.d 


# Each subdirectory must supply rules for building sources it contributes
App/%.o: ../App/%.c App/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\Embedded Systems\GDSC - embededd system\interfaceing\Projects\traffic_lighting_two_7segment_onePORT\code\7Segment_multiplexing\MCAL\inc" -I"D:\Embedded Systems\GDSC - embededd system\interfaceing\Projects\traffic_lighting_two_7segment_onePORT\code\7Segment_multiplexing\LIB\Common" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


