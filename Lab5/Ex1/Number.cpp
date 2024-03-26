#include "Number.h"
#include <iostream>
#include <cstring>

Number::Number(const char* value, int base) : base(base) {
    this->value = new char[strlen(value) + 1];
    strcpy(this->value, value);
    digitsCount = strlen(value);
}

Number::Number(int value) : base(10) {
    this->value = new char[20]; // assuming a max of 20 digits for base 10 numbers
    sprintf(this->value, "%d", value);
    digitsCount = strlen(this->value);
}

Number::Number(const Number& other) : base(other.base), digitsCount(other.digitsCount) {
    value = new char[strlen(other.value) + 1];
    strcpy(value, other.value);
}

Number::Number(Number&& other) noexcept : value(other.value), base(other.base), digitsCount(other.digitsCount) {
    other.value = nullptr;
}

Number::~Number() {
    delete[] value;
}

Number& Number::operator=(const Number& other) {
    if (this != &other) {
        delete[] value;
        value = new char[strlen(other.value) + 1];
        strcpy(value, other.value);
        base = other.base;
        digitsCount = other.digitsCount;
    }
    return *this;
}

Number& Number::operator=(Number&& other) noexcept {
    if (this != &other) {
        delete[] value;
        value = other.value;
        other.value = nullptr;
        base = other.base;
        digitsCount = other.digitsCount;
    }
    return *this;
}

Number operator+(const Number& lhs, const Number& rhs) {
    int base = (lhs.base > rhs.base) ? lhs.base : rhs.base;
    // perform addition logic here
}

Number operator-(const Number& lhs, const Number& rhs) {
    int base = (lhs.base > rhs.base) ? lhs.base : rhs.base;
    // perform subtraction logic here
}

char& Number::operator[](int index) {
    return value[index];
}

bool Number::operator>(const Number& other) const {
    // perform comparison logic here
}

bool Number::operator<(const Number& other) const {
    // perform comparison logic here
}

bool Number::operator>=(const Number& other) const {
    // perform comparison logic here
}

bool Number::operator<=(const Number& other) const {
    // perform comparison logic here
}

bool Number::operator==(const Number& other) const {
    // perform comparison logic here
}

bool Number::operator!=(const Number& other) const {
    // perform comparison logic here
}

void Number::SwitchBase(int newBase) {
    // perform base conversion logic here
}

void Number::Print() const {
    std::cout << value << std::endl;
}

int Number::GetDigitsCount() const {
    return digitsCount;
}

int Number::GetBase() const {
    return base;
}

Number& Number::operator--() {
    // perform decrement logic here
}

Number Number::operator--(int) {
    // perform decrement logic here
}
