#pragma once

constexpr float operator "" _Kelvin(unsigned long long kelvin)
{
    return kelvin - 273.15;
}

constexpr float operator "" _Fahrenheit(unsigned long long fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9;
}

