#pragma once
#include "Human.h"
#include "University.h"
class Student : public Human, public University
{
protected:
	int arr[10];
	int year;
	string faculty;
public:
	Student() = default;
	Student(string name, int age, string university_name, int Year, string rector, int arr[10], int year, string faculty);
	void Input();
	void Print();
};

