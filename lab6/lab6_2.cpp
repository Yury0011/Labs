#include <iostream>
#include <string>
using namespace std;

enum size_a { SMALL, NORMAL, BIG };
enum colors { RED, GREEN, YELLOW, BLUE, WHITE, BLACK, NONE };

class Alive {
protected:
	int age;
	size_a size_animal;
	colors color;
	bool isTamed;
public:
	Alive(int a, size_a sa) {
		age = a;
		size_animal = sa;
	}
	virtual void action() = 0;
	virtual void feed(string food) = 0;
};

class Bird : public Alive {
private:
	string favourite_food = "Worms";
public:
	Bird(int a, size_a sa, colors c) : Alive(a, sa) {
		color = c;
	};

	void action() {
		cout << "Fly" << endl;
	};

	void feed(string food) {
		if (food == favourite_food) {
			cout << "yummy ^^" << endl;
			isTamed = true;
		}
		else {
			cout << "foo" << endl;
		}
	};

	void fly(int height) {
		cout << "Flying on " << height << " meters" << endl;
	}
};

class Fish : public Alive {
private:
	string favourite_food = "Bread";
public:
	Fish(int a, size_a sa) : Alive(a, sa) {
		color = NONE;
		isTamed = false;
	};

	void action() {
		cout << "Swim" << endl;
	};

	void feed(string food) {
		cout << "This creature is not been tamed" << endl;
	};

	void swim(int depth) {
		cout << "Swimming at the depth of " << depth << "meters" << endl;
	};
};

class Animal : public Alive {
protected:
	string favourite_food;
private:
	int running_speed;
public:
	Animal(int a, size_a sa, colors c, int rs) : Alive(a, sa) {
		color = c;
		running_speed = rs;
	};

	void action() {
		cout << "Run" << endl;
	};

	void feed(string food) {
		if (favourite_food == food) {
			cout << "yummy ^^ " << endl;
			isTamed = true;
		}
		else {
			cout << "foo" << endl;
		}
	};

	void Run() {
		cout << "Running with speed " << running_speed << endl;
	}

	virtual void make_sound() = 0;
};
