#pragma once
#include "Car.h"
class Seat: public Car
{
public:
	Seat();
	float Racing(bool&, int, int) override;
	char* getName() override;
};
