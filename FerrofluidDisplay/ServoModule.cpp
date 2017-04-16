// 
// 
// 

#include "ServoModule.h"

ServoModule::ServoModule(uint8_t index)
{
	_index = index;
	_state = false;
}

void ServoModule::SetState(bool on)
{
	_state = on;

	// Ensure no other servo is selected
	SelectServo(-1);

	// Set ON_PIN value
	digitalWrite(ON_PIN, on);

	// Set select pin values
	SelectServo(_index);

	// TODO: Possible sleep here for a bit?

	// Deselect servo
	SelectServo(-1);
}

void ServoModule::SelectServo(uint8_t index)
{
	// Ensure selection index falls within acceptable range
	if (index > 15 || index < -1) return;

	// Servos on board are indexed from 1, not 0, because 0 is reserved for no selection
	index++;

	// Send each bit to the corresponding pin
	digitalWrite(S1_PIN, index & 0x1);
	digitalWrite(S2_PIN, (index & 0x2) >> 1);
	digitalWrite(S3_PIN, (index & 0x4) >> 2);
	digitalWrite(S4_PIN, (index & 0x8) >> 3);
	digitalWrite(S5_PIN, (index & 0x10) >> 4);
}
