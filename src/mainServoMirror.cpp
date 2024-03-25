/*
 * main.cpp - Servo Backdriven used to drive another servo
 *
 *  Created on: 24-Mar-2024
 *      Author: jondurrant
 */

#include "Servo.h"
#include <stdio.h>
#include "hardware/adc.h"

#define DELAY 1000 // in microseconds

#define SERVO1_PAD 14
#define SERVO2_PAD 15
#define SERVO2_ADC 2




int main(){

	adc_init();

	stdio_init_all();
	sleep_ms(2000);

	printf("Go\n");

	Servo servo1(SERVO1_PAD);
	Servo servo2(SERVO2_PAD, SERVO2_ADC);

	servo1.goDegree(90.0);
	servo2.goDegree(90.0);

	servo2.off();

	for (;;){
		float a = servo2.getDegree();
		servo1.goDegree(a);

		printf("Moving to %.2f\n", a);

		sleep_ms(20);

	}



}


