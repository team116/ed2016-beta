#include <cstdlib>
#include <OI.h>
#include <Ports.h>
#include <Joystick.h>

OI* OI::INSTANCE = NULL;

OI::OI()
{
	left_joy = new Joystick(OIPorts::LEFT_JOYSTICK);
	right_joy = new Joystick(OIPorts::RIGHT_JOYSTICK);
}

float OI::getLeftJoyY()
{
	return -left_joy->GetY();
}

float OI::getLeftJoyX()
{
	return left_joy->GetX();
}

float OI::getRightJoyY()
{
	return -right_joy->GetY();
}

float OI::getRightJoyX()
{
	return -right_joy->GetX();
}

OI* OI::getInstance()
{
	if (INSTANCE == NULL)
	{
		INSTANCE = new OI();
	}
	return INSTANCE;
}
