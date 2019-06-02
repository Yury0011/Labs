#include <iostream>
#include <string>
#include <cmath>
#include <locale.h>
using namespace std;
class child {
private:
	string name;
	string famile;
	int age;
public:
	void vvod() {
		cin >> name >> famile >> age;
	}
	void vivod() {
		cout << "Name: " << name << endl;
		cout << "Surname: "<< famile << endl;
		cout << "Age: "<< age <<endl;
	}
};
class Tiles {
public:
	string brand;
	int size_h, size_w, price;
	void getData() {
            cout << "Nazvanie: " << '\t' << brand << endl;
            cout << "Dlina: " << '\t' << size_h << endl;
            cout << "Shirina: " << '\t' << size_w << endl;
            cout << "Cena: " << '\t' << price << endl;
        };
};
class complex {
public:
	double real;
	double imag;
	double mod;
	void abs() {
		mod=sqrt(pow(real, 2) + pow(imag, 2));
	}
	void vivod() {
		cout << "deystvitelnaya chast = " << real << endl;
		cout << "mnimaya chast = " << imag << endl;
		cout << "Modul = " << mod << endl;
	}
};
class Vector {
public:
	double X, Y;
	double abs() {
		return sqrt(pow(X, 2) + pow(Y, 2));
	}
	Vector symm(Vector a, Vector b) {
		Vector C;
		C.X = a.X + b.X;
		C.Y = a.Y + b.Y;
		return C;
	}
	Vector razn(Vector a, Vector b) {
		Vector C;
		C.X = a.X - b.X;
		C.Y = a.Y - b.Y;
		return C;
	}
};
int main()
{
    setlocale(LC_ALL, "Rus");
	int k;
	child odin, dodin;
	Tiles privet, poka;
	complex chislo;
	Vector ivanich, kekalich,NOWII1,NOWII2;
	double mod1,mod2;
	cin >> k;
	switch (k) {
	case 1:
		odin.vvod();
		dodin.vvod();
		odin.vivod();
		dodin.vivod();
		break;
	case 2:
		cin >> privet.brand >> privet.size_h >> privet.size_w >> privet.price;
		cin >> poka.brand >> poka.size_h >> poka.size_w >> poka.price;
		privet.getData();
		poka.getData();
		break;
	case 3:
		cin >> chislo.real >> chislo.imag;
		chislo.abs();
		chislo.vivod();
		break;
	case 4:
		cin >> ivanich.X >> ivanich.Y;
		cin >> kekalich.X >> kekalich.Y;
		mod1 = ivanich.abs();
		mod2 = kekalich.abs();
		NOWII1=NOWII1.symm(ivanich,kekalich);
		NOWII2=NOWII2.razn(ivanich, kekalich);
		cout << mod1 << " " << mod2 << " (" << NOWII1.X<<";"<<NOWII1.Y<<")  (" << NOWII2.X<<";"<<NOWII2.Y<<")"<< endl;
		break;
	}
	
}
