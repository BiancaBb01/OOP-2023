#include "Circuit.h"

void Circuit::SetLength(int length) {
    this->length = length;
}

void Circuit::SetWeather(Weather weather) {
    this->weather = weather;
}

void Circuit::AddCar(Car* car) {
    cars.push_back(car);
}

void Circuit::Race() {
    // Implement the race logic here
}

void Circuit::ShowFinalRanks() {
    // Implement showing final ranks here
}

void Circuit::ShowWhoDidNotFinish() {
    // Implement showing who did not finish here
}
