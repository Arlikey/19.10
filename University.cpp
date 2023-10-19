#include "University.h"


University::University(string university_name, int year, string rector) {
	this->university_name = university_name;
	Year = year;
	this->rector = rector;
}

void University::Input() {
	cout << "Enter university name: ";
	cin >> university_name;
	cout << "Enter year of foundation: ";
	cin >> Year;
	cout << "Enter rector name: ";
	cin >> rector;
}

void University::Print() {
	cout << "University name: " << university_name << endl;
	cout << "Year of foundation: " << Year << endl;
	cout << "Rector name: " << rector << endl;
}