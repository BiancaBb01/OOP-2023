#pragma once
#ifndef BMW_H
#define BMW_H

#include "Car.h"

class BMW : public Car {
public:
    double calculateTime(int length, Weather weather) const override;
};

#endif 
