#include <CommandBase.h>
#include <Commands/JoystickDrive.h>
#include <Subsystems/Mobility.h>

JoystickDrive::JoystickDrive() : CommandBase("JoystickDrive")
{
	Requires(mobility);
}

// Called just before this Command runs the first time
void JoystickDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void JoystickDrive::Execute()
{
	mobility->setLeftSpeed(oi->getLeftJoyY());
	mobility->setRightSpeed(oi->getRightJoyY());
}

// Make this return true when this Command no longer needs to run execute()
bool JoystickDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void JoystickDrive::End()
{
	mobility->setLeftSpeed(0.0);
	mobility->setRightSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void JoystickDrive::Interrupted()
{
	End();
}
