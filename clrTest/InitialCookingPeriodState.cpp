#include "InitialCookingPeriodState.h"

InitialCookingPeriodState::InitialCookingPeriodState(){
	nameState = "Initial cooking period";
}

InitialCookingPeriodState::~InitialCookingPeriodState(){
}

char* InitialCookingPeriodState::GetName() {
	return nameState;
}

bool InitialCookingPeriodState::Open(void(*pfunc)()) {
	return true;
}

bool InitialCookingPeriodState::Close() {
	return true;
}

bool InitialCookingPeriodState::PressButton() {
	return true;
}
