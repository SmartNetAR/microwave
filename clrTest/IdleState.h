#pragma once
#include "IState.h"

class IdleState : public IState {
public:
	IdleState();
	~IdleState();
	virtual char* IState::GetName();
	virtual bool IState::Open(void(*pfunc)());
	virtual bool IState::Close();
	virtual bool IState::PressButton();

private:
	char* nameState;
};

