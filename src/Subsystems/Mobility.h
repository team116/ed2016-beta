#ifndef Mobility_H
#define Mobility_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>

class Mobility: public Subsystem
{
public:
	void InitDefaultCommand();

	void setLeftSpeed(float speed);
	void setRightSpeed(float speed);

	static Mobility* getInstance();

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	Mobility();
	static Mobility* INSTANCE;

	CANTalon* left_motor;
	CANTalon* right_motor;

};

#endif
