#include "Microwave.h"

Microwave::Microwave()
{
}


Microwave::~Microwave()
{
}

char* Microwave::GetStateName() {
	return stMachine.State()->GetName();

}

void Microwave::OpenDoor() {
	//light.setOn();
	void (Light::*oSetOn)(void);
	oSetOn = &Light::setOn;
	(light.*oSetOn)();

	//stMachine.OpenDoor( );
}

void Microwave::CloseDoor() {
	stMachine.CloseDoor();
}

void Microwave::PressButton() {
	stMachine.PressButton();
}

bool Microwave::IsLightOn() {
	return light.IsOn();
}
