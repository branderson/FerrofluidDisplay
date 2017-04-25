// ServoModule.h

#ifndef _SERVO_MODULE_h
#define _SERVO_MODULE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class ServoModule
{
private:
	uint8_t _index;
	bool _state;

	/*
	 * Set selection pins to servo at given index
	 * index: Index of servo to select
	 */
	static void SelectServo(uint8_t index);

public:
	ServoModule();

	/*
	 * Construct a servo with the given index
	 * index: index of servo to construct
	 */
	ServoModule(uint8_t index);

	/*
	 * Sets the state of the servo
	 * on: Whether the servo should be on or off
	 */
	void SetState(bool on);
};

#endif

