#pragma once
#include "IState.h"
#include "IdleState.h"
#include "IdleOpenDoorState.h"

class StateMachine
{
public:
	StateMachine();
	~StateMachine();
	IState* State();
	void OpenDoor();
	void CloseDoor();
private:
	IState* currentState;
	struct stateS
	{
		int prevState;
		int currentState;
		int nextState;
	}listStates;
	void SetCurrentState(IState* newCurrenState);
	void ChangeState();
};

