#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, int age, string university_name, int Year, string rector, int arr[10], int year, string faculty) :
	Human(name, age), University(university_name, Year, rector) {
	for (int i = 0; i < 10; i++)
	{
		this->arr[i] = arr[i];
	}
	this->year = year;
	this->faculty = faculty;
}

void Student::Input() {
	Human::Input();
	University::Input();
	for (int i = 0; i < 10 ; i++)
	{
		cout << "Enter " << i + 1 << " grade: ";
		cin >> arr[i];
	}
	cout << "Enter course: ";
	cin >> year;
	cout << "Enter faculty name: ";
	cin >> faculty;
}

void Student::Print() {
	Human::Print();
	University::Print();
	cout << "Grades:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "\t" << i + 1 << ". " << arr[i] << endl;
	}
	cout << "Course: " << year << endl;
	cout << "Faculty: " << faculty << endl;
}