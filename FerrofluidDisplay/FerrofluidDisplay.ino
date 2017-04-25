/*
 Name:		FerrofluidDisplay.ino
 Created:	4/4/2017 1:00:32 PM
 Author:	Brad
*/
#include <Servo.h>
#include "Pins.h"
#include "Display.h"

Display display;
Servo offPWM;
Servo onPWM;

void SetAll();

// the setup function runs once when you press reset or power the board
void setup() {
	// Configure pins
	pinMode(8, OUTPUT);
	pinMode(ON_PIN, OUTPUT);
	pinMode(S1_PIN, OUTPUT);
	pinMode(S2_PIN, OUTPUT);
	pinMode(S3_PIN, OUTPUT);
	pinMode(S4_PIN, OUTPUT);
	pinMode(S5_PIN, OUTPUT);
	pinMode(PWM_OFF_PIN, OUTPUT);
	pinMode(PWM_ON_PIN, OUTPUT);

	// Configure PWMs
	offPWM.attach(9);
	onPWM.attach(10);
	offPWM.writeMicroseconds(OFF_WIDTH);
	onPWM.writeMicroseconds(ON_WIDTH);

	Serial.end();

	display.ClearDisplay();
	digitalWrite(S1_PIN, LOW);
	digitalWrite(S2_PIN, LOW);
	digitalWrite(S3_PIN, LOW);
	digitalWrite(S4_PIN, LOW);
	digitalWrite(S5_PIN, LOW);
}

// the loop function runs over and over again until power down or reset
void loop() {
//	delay(1000);
//	display.SetServo(0, true);
//	delay(1000);
//	for (int i = 0; i < 1000; i++)
//	{
//		display.SetServo(0, false);
//	}

	delay(1000);
	display.ClearDisplay();
	delay(1000);
//	display.SetServo(3, false);
	display.SetServo(0, true);
	delay(1000);
//	display.ClearDisplay();
//	display.SetServo(0, false);
	display.SetServo(1, true);
	delay(1000);
//	display.ClearDisplay();
//	display.SetServo(1, false);
	display.SetServo(2, true);
	delay(1000);
//	display.ClearDisplay();
//	display.SetServo(2, false);
	display.SetServo(3, true);
	delay(1000);
	display.SetServo(3, false);
	delay(1000);
	display.SetServo(3, true);
	delay(1000);
	display.SetServo(3, false);

//	delay(2000);
//	display.SetServo(0, false);
//	digitalWrite(ON_PIN, HIGH);
////	digitalWrite(8, LOW);
//	digitalWrite(S3_PIN, HIGH);
//	delay(100);
//	digitalWrite(S3_PIN, LOW);
//	delay(2000);
////	display.SetServo(0, true);
//	digitalWrite(ON_PIN, LOW);
////	digitalWrite(8, HIGH);
//	digitalWrite(S3_PIN, HIGH);
//	delay(100);
//	digitalWrite(S3_PIN, LOW);
}

void SetAll()
{
	for (int i = 0; i < 16; i++)
	{
		display.SetServo(i, true);
	}
}