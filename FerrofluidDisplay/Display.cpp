// 
// 
// 

#include "Display.h"

Display::Display()
{
	for (uint8_t i = 0; i < 16; i++)
	{
		_servoStates[i] = false;
		_servos[i] = ServoModule(i);
	}
}

void Display::SetServo(int index, bool on)
{
	if (on)
	{
		_servoStates[index] = true;
		_servos[index].SetState(on);
	}
	else
	{
		// Cannot turn off individual servos for some reason
		_servoStates[index] = false;
		// Instead, must clear display (without setting states)...
		ClearDisplayInternal();
		// And enable each servo which was previously on
		for (int i = 0; i < 16; i++)
		{
			if (_servoStates[i])
			{
				_servos[i].SetState(true);
			}
		}
	}
}

void Display::ClearDisplayInternal()
{
	for (int i = 0; i < 16; i++)
	{
		_servos[i].SetState(false);
	}
	for (int i = 0; i < 16; i++)
	{
		_servos[i].SetState(false);
	}
}

void Display::ClearDisplay()
{
	for (int i = 0; i < 16; i++)
	{
		_servoStates[i] = false;
		_servos[i].SetState(false);
	}
	for (int i = 0; i < 16; i++)
	{
		_servos[i].SetState(false);
	}
}