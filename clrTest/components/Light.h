#pragma once
enum StatusLight { ON, OFF };

class Light {

public:
	Light();
	void setOn();
	void setOff();
	bool IsOn();
	bool IsOff();
	~Light();

private:
	bool on;
};

