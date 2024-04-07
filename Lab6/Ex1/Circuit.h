#pragma once
#include "Car.h"
#include "Seat.h"
#include "Volvo.h"
#include "BMW.h"
#include "Fiat.h"
#include "RangeRover.h"
#include <string.h>
using namespace std;


class Circuit
{
private:
	int length;
	Car* car[5];
	float timeToFinish[5];
	bool finished[5];
	int nrOfCars;
	int weather;

public:

	Circuit();

	void SetLength(int);

	void SetWeather(int);

	void AddCar(Car* c);

	void Race();

	void ShowFinalRanks();

	void ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit
};
