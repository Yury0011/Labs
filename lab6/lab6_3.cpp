#include <iostream>
#include <string>
#include "lab6_2.cpp"

using namespace std;

class Dog : public Animal {
private:
	string name;
public:
	Dog(int a, size_a sa, colors c, int rs, string n) : Animal(a, sa, c, rs) {
		favourite_food = "Bones";
		name = n;
	};

	void make_sound() {
		cout << "Woof" << endl;
	};


};

class Cat : public Animal {
private:
	string name;
public:
	Cat(int a, size_a sa, colors c, int rs, string n) : Animal(a, sa, c, rs) {
		favourite_food = "Fishes";
		name = n;
	};

	void make_sound() {
		cout << "Meow" << endl;
	};
};
