#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include <Commands/Command.h>
#include <OI.h>

using namespace std;

// list subsystems here to prevent cyclical dependencies
class Manipulator;
class Mobility;

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command
{
public:
	CommandBase(const string &name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static Manipulator* manipulator;
	static Mobility* mobility;
	static OI* oi;
};

#endif
