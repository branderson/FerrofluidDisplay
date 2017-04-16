// Display.h

#ifndef _DISPLAY_h
#define _DISPLAY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Display
{
private:
	ServoModule _servos[16];

public:
	/* 
	 * Initialize the display
	 */
	Display();

	/* 
	 * Set the state of the servo at the given index
	 * index: Index of servo to set state of 
	 * on: Whether to turn servo on or off
	 */
	void SetServo(int index, bool on);

	/*
	 * Set all pixels to off position
	 */
	void ClearDisplay();
};


#endif