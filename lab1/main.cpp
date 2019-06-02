#include <iostream>
#include "Complex.h"

using namespace std;

void printSumm(Complex a, Complex b) {
    Complex c;
    cout << "Summ: ";
    a.print();
    cout << " + ";
    b.print();
    cout << " = ";
    c.sum(a, b);
    c.print();
    cout << '\n';
}

void printDifference(Complex a, Complex b) {
    Complex c;
    cout << "Difference: ";
    a.print();
    cout << " - ";
    b.print();
    cout << " = ";
    c.diff(a, b);
    c.print();
    cout << '\n';
}

void printMultiplication(Complex a, Complex b) {
    Complex c;
    cout << "Multiplication: ";
    a.print();
    cout << " * ";
    b.print();
    cout << " = ";
    c.multiplication(a, b);
    c.print();
    cout << '\n';
}

void printDiv(Complex a, Complex b) {
    Complex c;
    try {
        cout << "Division: ";
        a.print();
        cout << " / ";
        b.print();
        cout << " = ";
        c.division(a, b);
        c.print();
    } catch (const exception& err) {
        cout << "|::ERROR:: division by 0 |";
    }
    cout << '\n';
}

void printAbsolute(Complex a) {
    cout << "Absolute: |";
    a.print();
    cout << "| = " << a.absolute() << '\n';
}

int main() {
    cout << "Problem 1:\n";
    Complex a, b;
    cout << "Enter complex number a:\n";
    cin >> a.real >> a.imaginary;
    cout << "Enter complex number b:\n";
    cin >> b.real >> b.imaginary;

    printSumm(a, b);
    printDifference(a, b);
    printMultiplication(a, b);
    printDiv(a, b);
    printAbsolute(a);
    printAbsolute(b);

    cout << "\nProblem 2:\n";
    freopen("complex.txt", "r", stdin);
    int n;
    float max = 0, absolute;
    cin >> n;

    Complex* comp = new Complex[n];
    for (int i = 0; i < n; ++i)
        cin >> comp[i].real >> comp[i].imaginary;

    for (int i = 0; i < n; ++i) {
        absolute = comp[i].absolute();
        comp[i].print();
        cout << " abs = " << absolute << '\n';
        if (max < absolute)
            max = absolute;
    }

    cout << "Maximal absolute value = " << max << '\n';

    delete [] comp;
    return 0;
}
