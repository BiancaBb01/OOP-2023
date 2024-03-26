
#include "complex.h"
#include <ostream>


Complex::Complex() :imag_data(0), real_data(0) {};
Complex::Complex(double real, double imag) :imag_data(imag), real_data(real) {};


bool Complex::is_real() {
    if (imag_data == 0)
        return true;
    else
        return false;
}

double Complex::real() {
    return real_data;
}

double Complex::imag() {
    return imag_data;
}

double Complex::abs()  {
    return sqrt(this->real_data * this->real_data + this->imag_data * this->imag_data);
}

Complex Complex::conjugate()  {
    return { this->real_data, -this->imag_data };

}
Complex Complex::operator+(const Complex& l) {
    return Complex(real_data + l.real_data, imag_data + l.imag_data);
}

Complex Complex::operator+(double r) {
    return Complex(real_data + r, imag_data);
}

Complex Complex::operator-(const Complex& l) {
    return Complex(real_data - l.real_data, imag_data - l.imag_data);
}

Complex Complex::operator-(double r) {
    return Complex(real_data - r, imag_data);

}

Complex Complex::operator*(const Complex& l) {
    Complex c;
    c.imag_data= real_data * l.real_data - imag_data * l.imag_data;
    c.imag_data = real_data * l.imag_data + imag_data * l.real_data;
    return c;
}

Complex Complex::operator*(double r) {
    return Complex(real_data * r, imag_data * r);

}


bool Complex::operator==(const Complex& l) {
    return (real_data == l.real_data) && (imag_data == l.imag_data);
}


bool Complex::operator!=(const Complex& l) {
    return !(*this == l);
}




Complex& Complex::operator++() {
    real_data++;
    return *this;
}

Complex& Complex::operator--() {
    real_data--;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << complex.real_data;
    if (complex.imag_data >= 0)
        out << " + " << complex.imag_data << "i";
    else
        out << " - " << -complex.imag_data << "i";
    return out;
}
   

    Complex Complex::operator-() {
        return Complex(-real_data, -imag_data);
    }

    Complex& Complex::operator()(double real, double imag) {
        real_data = real;
        imag_data = imag;
        return *this;
    }

    Complex Complex::operator++(int) {
        Complex temp(*this); 
        real_data++;
        return temp; 
    }

    Complex Complex::operator--(int) {
        Complex temp(*this); 
        real_data--;
        return temp;
    }
