#include "IdleOpenDoorState.h"


IdleOpenDoorState::IdleOpenDoorState()
{
	nameState = "Idle with the door Open";
}

char* IdleOpenDoorState::GetName() {
	return nameState;
}

bool IdleOpenDoorState::Open() {
	Door = OPEN;
	light.setOn();
	return true;
}

bool IdleOpenDoorState::Close() {
	Door = CLOSE;
	light.setOff();
	//change state to IdleState
	return true;
}

bool IdleOpenDoorState::IsLightOn() {
	return light.IsOn();
}

IdleOpenDoorState::~IdleOpenDoorState()
{
}
