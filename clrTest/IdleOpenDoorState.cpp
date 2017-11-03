#include "IdleOpenDoorState.h"

IdleOpenDoorState::IdleOpenDoorState() {
	nameState = "Idle with the door Open";
}

char* IdleOpenDoorState::GetName() {
	return nameState;
}

bool IdleOpenDoorState::Open() {
	return true;
}

bool IdleOpenDoorState::Close() {
	return true;
}

bool IdleOpenDoorState::PressButton() {
	return true;
}

IdleOpenDoorState::~IdleOpenDoorState() {
}
