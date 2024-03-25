# RPIPicoServoFeedback
This is an example project to show reading feedback on SG90 Servos (9G servos) using a Raspberry Pi Pico. This supports a Video on this on my YouTube channel [Dr Jon EA](https://youtube.com/@drjonea).

## Build and Make
Use normal build process
```
mkdir build
cd buid
cmake ..
make
```

## Examples
There are two examples: 

Servo.elf based on main.cpp. This moves two servos and reads the possition from one of them.

servoMirror.elf based on mainServoMirror. This takes the possition of one servo and uses it to drive the possition of the other. Back driving a servo is bad thing to do and these 9G servos will not survive for long doing it. So this was purely for demonstration purposes.

## Electronics
Servo PWM is connected to GPIO 14 and GPIO 15. One servo has the additiona feedback wire put into ADC2 (GPIO 28).


