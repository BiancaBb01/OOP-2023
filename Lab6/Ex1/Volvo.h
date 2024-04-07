#pragma once
#include "Car.h"
class Volvo : public Car
{
public:
	Volvo();
	float Racing(bool& ok, int, int) override;
	char* getName() override;
};
