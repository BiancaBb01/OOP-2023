#pragma once
#ifndef RANGEROVER_H
#define RANGEROVER_H

#include "Car.h"

class RangeRover : public Car {
public:
    double calculateTime(int length, Weather weather) const override;
};

#endif
