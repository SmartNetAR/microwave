using namespace System;


#pragma once
class IState
{
public:
	virtual char* GetName() = 0;
	virtual bool Open() = 0;
	virtual bool Close() = 0;
};

