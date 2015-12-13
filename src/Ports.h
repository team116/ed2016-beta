/*
 * Ports.h
 *
 *  Created on: Dec 5, 2015
 *      Author: calcifer
 */

#ifndef SRC_PORTS_H_
#define SRC_PORTS_H_

namespace RobotPorts
{
	// motors
	const int LEFT_MOTOR = 0;
	const int RIGHT_MOTOR = 1;

	const int SERVO = 0;

	// pistons
	const int PISTON_EXTEND_SOL = 0;
	const int PISTON_RETRACT_SOL = 1;
}

namespace OIPorts
{
	const int LEFT_JOYSTICK = 0;
	const int RIGHT_JOYSTICK = 1;
}

#endif /* SRC_PORTS_H_ */
