#pragma once
#include "Weather.h"

class Car
{
protected:
	int fuelCapacity;
	int fuelConsumption;
	int  averageSpeed[3];
	char* name;
public:
	enum Weather;
	virtual char* getName() = 0;
	virtual float Racing(bool&, int, int) = 0;
};
