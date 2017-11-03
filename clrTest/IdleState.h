#pragma once
#include "IState.h"

class IdleState : public IState {
public:
	IdleState();
	~IdleState();
	virtual char* IState::GetName();
	virtual bool IState::Open();
	virtual bool IState::Close();	 //do nothing

private:
	char* nameState;
};

