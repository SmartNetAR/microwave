#include "StateMachine.h"
#include "components\Light.h"

#pragma once

class Microwave {
private:
	StateMachine stMachine;
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

