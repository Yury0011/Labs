#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Human {
protected:
	string surname, name, midname;
	int age;
public:
	Human() {
	}
	virtual void print() = 0;
	~Human() {
	}
};

class student :public Human {
private:
	bool on_lesson;
public:
	student(string surname, string name, string midname, int age, bool on_lesson) :Human() {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->on_lesson = on_lesson;
	}
	void print() {
		cout << "Familiya: " << surname << endl;
		cout << "Imya: " << name << endl;
		cout << "Otchestvo: " << midname << endl;
		cout << "Vozrast: " << age << endl;
		cout << "Na yroke?: (1 = da, 0 - net): " << on_lesson << endl;
	}
	~student() {
		cout << "class Student desctructed" << endl;
	}
};
class boss :public Human {
private:
	int number_on_workes;
public:
	boss(string surname, string name, string midname, int age, int number_on_workes) :Human() {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->number_on_workes = number_on_workes;
	}
	void print() {

		cout << "Familiya: " << surname << endl;
		cout << "Imya: " << name << endl;
		cout << "Otchestvo: " << midname << endl;
		cout << "Vozrast: " << age << endl;
		cout << "ID: " << number_on_workes << endl;
	}
	~boss() {
		cout << "class boss destructed" << endl;
	}
};
int main()
{
	setlocale(0, "rus");
	cout << "Class Student: " << endl;
	student Yury = { "Mikhailov","Yury","Lvovich",18,true };
	Yury.print();
	cout << "\n\n";
	cout << "Class Boss: " << endl;
	boss inf = { "Smirnov","Sergey","Sergeevich",40,1337 };
	inf.print();
	_getch();
}
