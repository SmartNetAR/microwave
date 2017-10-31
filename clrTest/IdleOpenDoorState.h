#pragma once
#include "IState.h"
#include "Light.h"


class IdleOpenDoorState : public IState {

public:
	IdleOpenDoorState();
	~IdleOpenDoorState();
	virtual char* IState::GetName();
	virtual bool IState::Open();	//do nothing
	virtual bool IState::Close();
	virtual bool IState::IsLightOn();
private:
	char* nameState;
	Light light;
	StatusDoor Door;
};
