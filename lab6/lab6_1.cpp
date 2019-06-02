#include <iostream>
#include <string>
using namespace std;

const int COUNT_OF_NOTES = 5;

class Student {
public:
	string name;
	string family;
	string group;
	int age;
	int notes[COUNT_OF_NOTES];
	Student(string name, string family, string group, int age, int * notes) {
		this->name = name;
		this->family = family;
		this->group = group;
		this->age = age;
		for (int i = 0; i < COUNT_OF_NOTES; i++) {
			this->notes[i] = notes[i];
		}
	};
};

class Headman : public Student {
public:
	int money_per_month;
	string mail;
	Headman(string name, string family, string group, int age, int * notes, int money, string mail) : Student(name, family, group, age, notes) {
		money_per_month = money;
		this->mail = mail;
	};
	void change_notes(Student& stud, int * notes) {
		if (this->group == stud.group) {
			for (int i = 0; i < COUNT_OF_NOTES; i++) {
				stud.notes[i] = notes[i];
			}
		}
		else {
			cout << "Данный староста не может менять оценки студента другой группы" << endl;
		}
	}
};
