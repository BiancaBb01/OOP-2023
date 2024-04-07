#pragma once
#ifndef FIAT_H
#define FIAT_H

#include "Car.h"

class Fiat : public Car {
public:
    double calculateTime(int length, Weather weather) const override;
};

#endif 
