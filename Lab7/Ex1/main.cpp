#include <iostream>
#include "temperature.h"

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;

    std::cout << "Valoarea a in Celsius: " << a << std::endl;
    std::cout << "Valoarea b in Celsius: " << b << std::endl;

    return 0;
}
