/*
 * Piston.cpp
 *
 *  Created on: Dec 8, 2015
 *      Author: calcifer
 */

#include <Piston.h>
#include <Solenoid.h>

Piston::Piston(unsigned int extension_port, unsigned int retraction_port)
{
	extender = new Solenoid(extension_port);
	retractor = new Solenoid(retraction_port);
}

Piston::Piston(unsigned int extension_port)
{
	extender = new Solenoid(extension_port);
	retractor = NULL;
}

void Piston::extend()
{
	set(true);
}

void Piston::retract()
{
	set(false);
}

void Piston::set(bool extended)
{
	if (extended)
	{
		if (retractor)
		{
			retractor->Set(false);
		}
		extender->Set(true);
	}
	else
	{
		extender->Set(false);
		if (retractor)
		{
			retractor->Set(true);
		}
	}
}
