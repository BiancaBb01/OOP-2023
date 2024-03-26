#pragma once
#ifndef complex_h
#define complex_h
#include <ostream>

// operatori care trebuie implementati:
// 1. op+, op-, op*
// care sa accepte doua numere complexe, un numar complex si un numar real, sau un numar real si un numar complex
// (9 in total)
// 2. op- unar
// 3. op== si op!=
// 4. op<< de streamuri pentru afisare
// 5. op++ prefixat si postfixat si op-- prefixat si postfixat
// 6. op() cu semnificatia de mai jos
// total: 18 operatori

// op++ postfixat TREBUIE sa foloseasca op++ prefixat
// op-- postfixat TREBUIE sa foloseasca op-- prefixat

// op+, op-, op* care iau un numar real TREBUIE sa foloseasca respectivii care iau numere complexe
// eg: op+(Complex, double) va apela op+(Complex, Complex)

class Complex {
private:
    double real_data;
    double imag_data;

public:
    Complex();
    Complex(double real, double imag);
    // daca numarul are doar o parte reala
    bool is_real() ;

    double real();
    double imag();
    // absolutul numarului
    double abs() ;
    // conjugatul
    Complex conjugate() ;

    Complex& operator()(double real, double imag);
    Complex operator+(const Complex& l);
    Complex operator+(double r);

    Complex operator-(const Complex& l);
    Complex operator-(double r);

    bool operator==(const Complex& l);
    Complex operator*(const Complex& l);
    Complex operator*(double r);
    bool operator!=(const Complex& l);
    Complex& operator++();
    Complex& operator--();

    friend std::ostream& operator<<(std::ostream& out, const Complex& complex);

    Complex operator-();

    Complex operator++(int);

    Complex operator--(int);
};
#endif
