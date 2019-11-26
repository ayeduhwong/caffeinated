################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../caffeinatedmain.cpp 

OBJS += \
./caffeinatedmain.o 

CPP_DEPS += \
./caffeinatedmain.d 


# Each subdirectory must supply rules for building sources it contributes
caffeinatedmain.o: ../caffeinatedmain.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/home/ada/eclipse-workspace/Caffeinated" -I"/home/ada/eclipse-workspace/Caffeinated/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"caffeinatedmain.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


