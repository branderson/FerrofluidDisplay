#ifndef PINS_H
#define PINS_H

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
//#define ON_WIDTH 1333 // Range of values is 1000us to 2000us, so 60 degrees from 1000 should be 1333us
//#define OFF_WIDTH 1666 // 120 degrees should be 1666us
#define OFF_WIDTH 1200 // Range of values is 1000us to 2000us, so 60 degrees from 1000 should be 1333us
#define ON_WIDTH 1800 // 120 degrees should be 1666us
//#define ON_WIDTH 1000 // Range of values is 1000us to 2000us, so 60 degrees from 1000 should be 1333us
//#define OFF_WIDTH 2000 // 120 degrees should be 1666us


#endif