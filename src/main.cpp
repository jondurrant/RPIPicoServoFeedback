/*
 * main.cpp
 *
 *  Created on: 9 Jun 2022
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

	for (;;){
		sleep_ms(1000);
		printf("Go 90\n");
		servo1.goDegree(90.0);
		servo2.goDegree(90.0);

		for (int i=0; i < 30; i++){
			printf("Target 90, Actual %.2f\n", servo2.getDegree());
			sleep_ms(30);
		}

		sleep_ms(1000);
		printf("Go 180\n");
		servo1.goDegree(180.0);
		servo2.goDegree(180.0);

		for (int i=0; i < 30; i++){
			printf("Target 180, Actual %.2f\n", servo2.getDegree());
			sleep_ms(30);
		}

		sleep_ms(1000);
		printf("Go 0\n");
		servo1.goDegree(0.0);
		servo2.goDegree(0.0);

		for (int i=0; i < 30; i++){
			printf("Target 0, Actual %.2f\n", servo2.getDegree());
			sleep_ms(30);
		}

	}



}


