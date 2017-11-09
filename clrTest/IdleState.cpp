#include "IdleState.h"

IdleState::IdleState() {
	nameState = "Idle with the door Closed";
}

char* IdleState::GetName() {
	return nameState;
}

bool IdleState::Open(void(*pfunc)()) {
	return true;
}

bool IdleState::Close() {
	return true;
}

bool IdleState::PressButton() {
	return true;
}

IdleState::~IdleState() {
}
