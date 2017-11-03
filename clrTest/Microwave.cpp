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
	return stMachine.State()->GetName();

}

void Microwave::OpenDoor() {
	stMachine.OpenDoor();
	//cambio de estado manual. MAL!
	/*delete currentState;
	currentState = new(IdleOpenDoorState);
	light.setOn();
	currentState->Open();*/
}

void Microwave::CloseDoor() {
	stMachine.CloseDoor();
	/*
	//cambio de estado manual. MAL!
	currentState = new(IdleState);
	currentState->Close();
	*/
}

bool Microwave::IsLightOn(){
	return light.IsOn();
}
