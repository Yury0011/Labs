#ifndef LABORARBEIT_1_COMPLEX_H
#define LABORARBEIT_1_COMPLEX_H

#endif //LABORARBEIT_1_COMPLEX_H


struct Complex{
    float real;
    float imaginary;

    float absolute();
    void sum(Complex a, Complex b);
    void diff(Complex a, Complex b);
    void multiplication(Complex a, Complex b);
    void division(Complex a, Complex b);
    void print();
};
