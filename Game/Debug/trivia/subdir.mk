################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../trivia/Question.cpp 

OBJS += \
./trivia/Question.o 

CPP_DEPS += \
./trivia/Question.d 


# Each subdirectory must supply rules for building sources it contributes
trivia/%.o: ../trivia/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/shikuma/Projects/projectTriv/Game" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


