#pragma once
#include "Car.h"
class BMW : public Car
{
public:
	BMW();
	float Racing(bool& ok, int, int) override;
	char* getName() override;
};
