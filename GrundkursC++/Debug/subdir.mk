################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../listing001.cpp \
../listing002.cpp \
../listing003.cpp 

CPP_DEPS += \
./listing001.d \
./listing002.d \
./listing003.d 

OBJS += \
./listing001.o \
./listing002.o \
./listing003.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./listing001.d ./listing001.o ./listing002.d ./listing002.o ./listing003.d ./listing003.o

.PHONY: clean--2e-

