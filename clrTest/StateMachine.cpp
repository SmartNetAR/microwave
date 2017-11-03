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
	ChangeState(doorOpened);
	currentState->Open();
}

void StateMachine::CloseDoor()
{
	ChangeState(doorClosed);
	currentState->Close();
}

void StateMachine::PressButton()
{
	ChangeState(buttonPushed);
	currentState->PressButton();
}

void StateMachine::SetCurrentState( IState* newCurrentState){
	if (currentState) {
		delete currentState;
		currentState = nullptr;
	}	
	currentState = newCurrentState;
}

void StateMachine::ChangeState(eventOcurred newEvent) {
	switch (newEvent)
	{
	case buttonPushed:
		if (listStates.currentState == 1) {
			SetCurrentState(new InitialCookingPeriodState);
			listStates.prevState = 1;
			listStates.currentState = 2;
		}
		break;
	case timeOut:
		break;
	case doorOpened:
		switch (listStates.currentState)
		{
		case 1:
			SetCurrentState(new IdleOpenDoorState);
			listStates.prevState = 1;
			listStates.currentState = 5;
			break;
		default:
			break;
		}
		break;
	case doorClosed:
		switch (listStates.currentState)
		{
		case 5:
			SetCurrentState(new IdleState);
			listStates.prevState = 5;
			listStates.currentState = 1;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
