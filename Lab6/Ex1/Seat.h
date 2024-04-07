#pragma once
#ifndef SEAT_H
#define SEAT_H

#include "Car.h"

class Seat : public Car {
public:
    double calculateTime(int length, Weather weather) const override;
};

#endif
