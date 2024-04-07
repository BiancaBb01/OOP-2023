#pragma once
#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <vector>
#include "Car.h"

class Circuit {
public:
    void SetLength(int length);
    void SetWeather(Weather weather);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();

private:
    int length;
    Weather weather;
    std::vector<Car*> cars;
};

#endif
