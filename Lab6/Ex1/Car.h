#pragma once
#ifndef CAR_H
#define CAR_H

#include "Weather.h"

class Car {
public:
    virtual double calculateTime(int length, Weather weather) const = 0;
};

#endif
