#include "IdleState.h"



IdleState::IdleState()
{
	nameState = "Idle with the door Closed";
}

char* IdleState::GetName() {
	return nameState;
}

bool IdleState::Open() {
	Door = OPEN;
	light.setOn();
	//change state to IdleOpenDoorState
	return true;
}

bool IdleState::Close() {
	Door = CLOSE;
	light.setOff();
	return true;
}

bool IdleState::IsLightOn() {
	return light.IsOn();
}


IdleState::~IdleState()
{
}
