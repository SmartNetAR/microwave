#pragma once
#include "IState.h"


class IdleOpenDoorState : public IState {
public:
	IdleOpenDoorState();
	~IdleOpenDoorState();
	virtual char* IState::GetName();
	virtual bool IState::Open();	//do nothing
	virtual bool IState::Close();
	virtual bool IState::PressButton(); //do nothing
private:
	char* nameState;
};
