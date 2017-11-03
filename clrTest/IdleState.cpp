#include "IdleState.h"



IdleState::IdleState()
{
	nameState = "Idle with the door Closed";
}

char* IdleState::GetName() {
	return nameState;
}

bool IdleState::Open() {
	return true;
}

bool IdleState::Close() {
	return true;
}

/*bool IdleState::IsLightOn() {
	return light.IsOn();
}*/


IdleState::~IdleState()
{
}
