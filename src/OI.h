#ifndef OI_H
#define OI_H

#include <Joystick.h>

class OI
{
public:
	float getLeftJoyY();
	float getLeftJoyX();

	float getRightJoyY();
	float getRightJoyX();

	static OI* getInstance();

private:
	OI();
	static OI* INSTANCE;

	Joystick* left_joy;
	Joystick* right_joy;

};

#endif
