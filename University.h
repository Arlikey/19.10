#pragma once
#include <iostream>
using namespace std;

class University
{
protected:
	string university_name;
	int Year;
	string rector;
public:
	University() = default;
	University(string university_name, int year, string rector);
	void Input();
	void Print();
};

