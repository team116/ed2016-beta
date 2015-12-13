#ifndef MobilityDefault_H
#define MobilityDefault_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"

class MobilityDefault: public CommandGroup
{
public:
	MobilityDefault();

	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:

};

#endif
