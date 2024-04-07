#pragma once
#include "Car.h"
class Fiat : public Car
{
public:
	Fiat();
	float Racing(bool& ok, int, int) override;
	char* getName() override;
};
