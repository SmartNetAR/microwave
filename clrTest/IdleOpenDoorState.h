#pragma once
#include "IState.h"

class IdleOpenDoorState : public IState {
public:
	IdleOpenDoorState();
	~IdleOpenDoorState();
	virtual char* IState::GetName();
	virtual bool IState::Open();
	virtual bool IState::Close();
	virtual bool IState::PressButton();
private:
	char* nameState;
};
