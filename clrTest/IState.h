using namespace System;
enum StatusDoor { CLOSE, OPEN };


#pragma once
class IState
{
public:
	virtual char* GetName() = 0;
	virtual bool Open() = 0;
	virtual bool Close() = 0;
	virtual bool IsLightOn() = 0;
};

