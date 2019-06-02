#include <iostream>
using namespace std;

class complex {//5.1
public:
	double real;
	double imag;
	void operator +(complex);
	void operator -(complex);
	void operator =(complex);
	void operator<<(complex);
	void operator>>(complex);
	bool friend operator==(complex a, complex b) {
		if (a.real == b.real&&a.imag == b.imag)return true;
		else return false;
	}

	void output() {
		cout << real << " " << imag << endl;
	}
};
void complex::operator +(complex a) {
	real = real + a.real;
	imag = imag + a.imag;
}
void complex::operator-(complex a) {
	real = real - a.real;
	imag = imag - a.imag;
}
void complex::operator=(complex a) {
	real = a.real;
	imag = a.imag;
}
void complex::operator<<(complex a) {
	cout << a.real << " " << a.imag << endl;
}
void complex::operator>>(complex a) {
	cin >> a.real;
	cin >> a.imag;
	this->real = a.real;
	this->imag = a.imag;
}

//5.2
class Vector {
public:
	double X, Y;
	double abs() {
		return sqrt(pow(X, 2) + pow(Y, 2));
	}
	Vector symm(Vector a, Vector b) {
		Vector C = { a.X + b.X , a.Y + b.Y };
		return C;
	}
	Vector razn(Vector a, Vector b) {
		Vector C = { a.X - b.X , a.Y - b.Y };
		return C;
	}
	void operator=(Vector);
	void operator>>(Vector);
	void operator<<(Vector);
	bool friend operator==(Vector a, Vector b) {
		if (a.X == b.X&&a.Y == b.Y)return true;
		else return false;
	}
};
void Vector::operator=(Vector vec) {
	this->X = vec.X;
	this->Y = vec.Y;
}
void Vector::operator>>(Vector vec) {
	cin >> vec.X >> vec.Y;
	this->X = vec.X;
	this->Y = vec.Y;
}
void Vector::operator<<(Vector vec) {
	cout << "(" << vec.X << "," << vec.Y << ")\n";
}
int main()
{
	complex a = { 5,10 };
	complex b = { -5,10 };
	complex d;
	complex c = { 0,0 };
	Vector vect1 = { 0,0 }, vect2 = { 0,0 };
	int k;
	cin >> k;
	switch (k) {
	case 1://5.1
		if (b == a) {
			cout << "a==b" << endl;
		}
		else cout << "a!=b" << endl;
		c >> c;
		c << c;
		b.output();
		d = b;
		d + a;
		d.output();
		b - a;
		b.output();
		break;
	case 2://5.2
		vect1 >> vect1;
		vect1 << vect1;
		vect2 >> vect2;
		vect2 << vect2;
		if (vect1 == vect2)cout << "vect1==vect2" << endl;
		else cout << "vect1!=vect2" << endl;
		break;
	}
}
