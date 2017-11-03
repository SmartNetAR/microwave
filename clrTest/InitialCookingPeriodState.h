#pragma once
#include "IState.h"

class InitialCookingPeriodState : public IState {
public:
	InitialCookingPeriodState();
	~InitialCookingPeriodState();
	virtual char* IState::GetName();
	virtual bool IState::Open();	
	virtual bool IState::Close(); 
	virtual bool IState::PressButton();
private:
	char* nameState;
};

