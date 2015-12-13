/*
 * Piston.h
 *
 *  Created on: Dec 8, 2015
 *      Author: calcifer
 */

#ifndef SRC_PISTON_H_
#define SRC_PISTON_H_

#include <Solenoid.h>

class Piston
{
public:
	Piston(unsigned int extension_port, unsigned int retraction_port);
	/**
	 * Used for single solenoid pistons.
	 * calls to extend() and set(true) will activate the solenoid
	 * calls to retract() and set(false) will deactivate the solenoid
	 */
	Piston(unsigned int extension_port);

	void extend();
	void retract();
	void set(bool extend);

private:
	Solenoid* extender;
	Solenoid* retractor;

};

#endif /* SRC_PISTON_H_ */
