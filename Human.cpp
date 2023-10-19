#include "Human.h"

Human::Human(string name, int age) {
	this->name = name;
	this->age = age;
}

void Human::Input() {
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
}

void Human::Print() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}