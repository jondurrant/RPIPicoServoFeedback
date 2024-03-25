/*
 * Servo.h
 *
 *  Created on: 1 Jun 2023
 *      Author: jondurrant
 */

#ifndef SERVO_SRC_SERVO_H_
#define SERVO_SRC_SERVO_H_

#include "pico/stdlib.h"

class Servo {
public:
	Servo(uint8_t gp, uint8_t adc=0xff);
	virtual ~Servo();

	/**
	 * move to angle: 0 to 180.
	 * @param degree
	 */
	void goDegree(float degree);

	/***
	 * Turn servo off
	 */
	void off();

	/***
	 * Get Angle of the Servo
	 * Uses voltage if a ADC was specified
	 * Otherwise returns target
	 * @return Degrees
	 */
	float getDegree();

private:
	uint8_t xGP = 0xff;
	uint8_t xADC = 0xff;
	float xTarget = 0.0;
};

#endif /* SERVO_SRC_SERVO_H_ */
