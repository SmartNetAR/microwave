#include "IState.h"
#include "IdleState.h"
#include "IdleOpenDoorState.h"

//#include "Light.h"

#pragma once

class Microwave
{
private:
	IState* currentState;
public:
	Microwave();
	~Microwave();
	char* GetStateName();
	void OpenDoor();
	void CloseDoor();
	bool IsLightOn();
};

