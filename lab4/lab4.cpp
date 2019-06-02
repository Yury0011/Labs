#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class child {
private:
	string name;
	string famile;
	int age;
public:
	child(string nam,string famil,int ag) {
		name = nam;
		famile = famil;
		age = ag;
	}
	void vivod() {
		cout << name << " " << famile << " " << age << endl;
	}
};
class Tiles {
public:
	string brand;
	int size_h, size_w, price;
	Tiles(string name,int h,int w,int pr) {
		brand = name;
		size_h = h;
		size_w = w;
		price = pr;
	}
	void getData() {
		cout << brand << " " << size_h << " " << size_w << " " << price << endl;
	}
};
class complex {
public:
	double real;
	double imag;
	double mod;
	complex(double re, double im) {
		real = re;
		imag = im;
	}
	void abs() {
		mod = sqrt(pow(real, 2) + pow(imag, 2));
	}
	void vivod() {
		cout << real << " " << imag << " " << mod << endl;
	}
};


int main()
{
	int k;
	child odin = { "Ivan","Sheguta",18 };
	Tiles privet = { "zxcv",134,100,102314 };
	complex chislo = { 3.14, 148 };
	double mod1, mod2;
	cin >> k;
	switch (k) {
	case 1:
		odin.vivod();
		break;
	case 2:
		privet.getData();
		break;
	case 3:
		chislo.abs();
		chislo.vivod();
		break;
	
	}

}
