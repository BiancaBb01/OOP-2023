#pragma once
#ifndef VOLVO_H
#define VOLVO_H

#include "Car.h"

class Volvo : public Car {
public:
    double calculateTime(int length, Weather weather) const override;
};

#endif
