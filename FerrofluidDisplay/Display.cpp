// 
// 
// 

#include "Display.h"
#include "ServoModule.h"

Display::Display()
{
	for (int i = 0; i < 16; i++)
	{
		_servos[i] = ServoModule(i);
	}
}

void Display::SetServo(int index, bool on)
{
	_servos[index].SetState(on);
}

void Display::ClearDisplay()
{
	for (int i = 0; i < 16; i++)
	{
		_servos[i].SetState(false);
	}
}