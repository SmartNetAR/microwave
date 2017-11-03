#include "Light.h"



Light::Light()
{
	on = false;
}

void Light::setOn()
{
	on = true;
}

void Light::setOff()
{
	on = false;
}

bool Light::IsOn()
{
	return on;
}

bool Light::IsOff()
{
	return !on;
}


Light::~Light()
{
}
