#include <Commands/Groups/MobilityDefault.h>
#include <Ports.h>
#include <Subsystems/Mobility.h>

Mobility* Mobility::INSTANCE = NULL;

Mobility::Mobility() : Subsystem("ExampleSubsystem")
{
	left_motor = new CANTalon(RobotPorts::LEFT_MOTOR);
	right_motor = new CANTalon(RobotPorts::RIGHT_MOTOR);
}

void Mobility::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new MobilityDefault());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Mobility::setLeftSpeed(float speed)
{
	left_motor->Set(speed);
}

void Mobility::setRightSpeed(float speed)
{
	right_motor->Set(speed);
}

Mobility* Mobility::getInstance()
{
	if (INSTANCE == NULL)
	{
		INSTANCE = new Mobility();
	}
	return INSTANCE;
}
