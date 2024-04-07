#include "Seat.h"
#include "Car.h"
#include "Weather.h"

Seat::Seat() {
	fuelCapacity = 50;
	fuelConsumption = 30;
	averageSpeed[Rain] = 40;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 20;
	name = (char*)"Seat";
}

char* Seat::getName() {
	return name;
}


float Seat::Racing(bool& ok, int weather, int length) {
	int speed = averageSpeed[weather]; // speed: 60
	float cap = fuelCapacity / fuelConsumption; // cap:  5/3
	float distance = cap * speed; // 1,6 * 60 => distance: 96

	if (distance >= length) {
		ok = true; // a terminat
	}
	else {
		ok = false;
	}
	return (cap * length / distance);
}
