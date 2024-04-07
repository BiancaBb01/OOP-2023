#pragma once
#include "Car.h"
class RangeRover: public Car
{
public:
	RangeRover();
	float Racing(bool& ok, int, int) override;
	char* getName() override;
};
