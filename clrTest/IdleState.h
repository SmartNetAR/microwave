#pragma once
#include "IState.h"
#include "Light.h"

class IdleState : public IState {
public:
	IdleState();
	~IdleState();
	virtual char* IState::GetName();
	virtual bool IState::Open();
	virtual bool IState::Close();	 //do nothing
	virtual bool IState::IsLightOn();

private:
	char* nameState;
	Light light;
	StatusDoor Door;
};

