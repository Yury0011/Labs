#include <iostream>
#include <exception>
#include <cmath>
#include "Complex.h"

float Complex::absolute() {
    return sqrt(pow(this->imaginary, 2) + pow(this->real, 2));
}

void Complex::sum(Complex a, Complex b) {
    this->real = a.real + b.real;
    this->imaginary = a.imaginary + b.imaginary;
}

void Complex::diff(Complex a, Complex b) {
    this->real = a.real - b.real;
    this->imaginary = a.imaginary - b.imaginary;
}

void Complex::multiplication(struct Complex a, struct Complex b) {
    this->real = a.real * b.real - a.imaginary * b.imaginary;
    this->imaginary = a.real * b.imaginary + a.imaginary * b.real;
}

void Complex::division(struct Complex a, struct Complex b) {
    float div = b.real * b.real - b.imaginary * b.imaginary;
    if (div == 0)
        throw std::exception();
    b.imaginary *= -1;
    this->multiplication(a, b);
    this->real /= div;
    this->imaginary /= div;
}

void Complex::print() {
    std::cout << "( " << this->real << " + (" << this->imaginary << ")i )";
}
