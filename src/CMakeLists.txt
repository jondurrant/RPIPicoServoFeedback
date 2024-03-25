add_executable(${NAME}
        main.cpp
        Servo.cpp
        )

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(${NAME} 
    pico_stdlib 
    hardware_pwm
    hardware_adc)

# create map/bin/hex file etc.
pico_add_extra_outputs(${NAME})

# enable usb output, disable uart output
pico_enable_stdio_usb(${NAME} 1)
pico_enable_stdio_uart(${NAME} 1)
target_compile_definitions(${NAME} PRIVATE
    PICO_DEFAULT_UART_RX_PIN=16
    PICO_DEFAULT_UART_TX_PIN=17
)



add_executable(servoMirror
   mainServoMirror.cpp
   Servo.cpp
)
# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(servoMirror
    pico_stdlib 
    hardware_pwm
    hardware_adc)

# enable usb output, disable uart output
pico_enable_stdio_usb(servoMirror 1)
pico_enable_stdio_uart(servoMirror 1)
target_compile_definitions(servoMirror PRIVATE
    PICO_DEFAULT_UART_RX_PIN=16
    PICO_DEFAULT_UART_TX_PIN=17
)