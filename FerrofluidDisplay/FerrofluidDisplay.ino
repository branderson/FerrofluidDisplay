/*
 Name:		FerrofluidDisplay.ino
 Created:	4/4/2017 1:00:32 PM
 Author:	Brad
*/
#include <Servo.h>
#include "ServoModule.h"
#include "Display.h"

// Pin definitions
#define ON_PIN 7 // ATmega328p pin 13
// ServoModule select pins
#define S1_PIN 0 // ATmega328p pin 2
#define S2_PIN 1 // ATmega328p pin 3
#define S3_PIN 2 // ATmega328p pin 4
#define S4_PIN 3 // ATmega328p pin 5
#define S5_PIN 4 // ATmega328p pin 6
// PWM pins
#define PWM_OFF_PIN 9 // ATmega328p pin 15 
#define PWM_ON_PIN 10 // ATmega328p pin 16

// PWM Configuration
#define ON_WIDTH 1333 // Range of values is 1000us to 2000us, so 60 degrees from 1000 should be 1333us
#define OFF_WIDTH 1666 // 120 degrees should be 1666us

Display display;
Servo offPWM;
Servo onPWM;

// the setup function runs once when you press reset or power the board
void setup() {
	// Configure pins
	pinMode(ON_PIN, OUTPUT);
	pinMode(S1_PIN, OUTPUT);
	pinMode(S2_PIN, OUTPUT);
	pinMode(S3_PIN, OUTPUT);
	pinMode(S4_PIN, OUTPUT);
	pinMode(S5_PIN, OUTPUT);

	// Configure PWMs
	offPWM.attach(9);
	onPWM.attach(10);
	offPWM.writeMicroseconds(OFF_WIDTH);
	onPWM.writeMicroseconds(ON_WIDTH);

	display.ClearDisplay();
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
