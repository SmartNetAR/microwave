#include "Microwave.h"


Microwave::Microwave()
{
	currentState = new(IdleState);
}


Microwave::~Microwave()
{
}

char* Microwave::GetStateName() 
{
	return currentState->GetName();
}

void Microwave::OpenDoor() {
	//cambio de estado manual. MAL!
	currentState = new(IdleOpenDoorState);
	currentState->Open();
}

void Microwave::CloseDoor() {
	//cambio de estado manual. MAL!
	currentState = new(IdleState);
	currentState->Close();
}

bool Microwave::IsLightOn(){
	return currentState->IsLightOn();
}
