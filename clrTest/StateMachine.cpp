#include "StateMachine.h"

StateMachine::StateMachine()
{
	currentState = new(IdleState);
	listStates.prevState = 0;
	listStates.currentState = 1;
}


StateMachine::~StateMachine()
{
	if (currentState) {
		delete currentState;
	}
}

IState * StateMachine::State()
{
	return currentState;
}

void StateMachine::OpenDoor()
{
	ChangeState();
	currentState->Open();
}

void StateMachine::CloseDoor()
{
	ChangeState();
	currentState->Close();
}

void StateMachine::SetCurrentState( IState* newCurrentState)
{
	if (currentState) {
		delete currentState;
		currentState = nullptr;
	}
	
	currentState = newCurrentState;
}

void StateMachine::ChangeState() {
	switch (listStates.currentState) {
	case 1:
		SetCurrentState(new IdleOpenDoorState);
		listStates.prevState = 1;
		listStates.currentState = 2;
		break;
	case 2:
		SetCurrentState(new IdleState);
		listStates.prevState = 2;
		listStates.currentState = 1;
		break;
	}
}
