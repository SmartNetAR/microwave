#pragma once
#include "IState.h"
#include "IdleState.h"
#include "IdleOpenDoorState.h"
#include "InitialCookingPeriodState.h"

enum eventOcurred { buttonPushed, timeOut, doorOpened, doorClosed };

class StateMachine
{
public:
	StateMachine();
	~StateMachine();
	IState* State();
	void OpenDoor();
	void CloseDoor();
	void PressButton();
private:
	IState* currentState;
	struct stateS
	{
		int event;
		int prevState;
		int currentState;
		int nextState;
	}listStates;
	void SetCurrentState(IState* newCurrenState);
	void ChangeState(eventOcurred newEvent);
};

