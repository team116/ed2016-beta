#include <CommandBase.h>
#include <Commands/Scheduler.h>
#include <Subsystems/Mobility.h>
#include <OI.h>

// Initialize a single static instance of all of your subsystems to NULL
Mobility* CommandBase::mobility = NULL;
OI* CommandBase::oi = NULL;

CommandBase::CommandBase(const std::string &name) :
		Command(name)
{

}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	mobility = Mobility::getInstance();

	oi = OI::getInstance();
}
