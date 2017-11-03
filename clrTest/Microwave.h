#include "StateMachine.h"
#include "IState.h"
#include "IdleState.h"
#include "IdleOpenDoorState.h"
#include "components\Light.h"

#pragma once

class Microwave
{
private:
	StateMachine stMachine;
	IState* currentState;
	Light light;
public:
	Microwave();
	~Microwave();
	char* GetStateName();
	void OpenDoor();
	void CloseDoor();
	void PressButton();
	bool IsLightOn();
};

