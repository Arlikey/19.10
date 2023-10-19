#include <iostream>
#include "Human.h"
#include "University.h"
#include "Student.h"
using namespace std;

int main() {

	int arr[10] = { 10, 9, 8, 8, 7, 11, 9, 12, 11, 8 };

	Student student("Sarah", 20, "Ivydale University", 1875, "Dr. Michael Anderson", arr, 2, "Faculty of Social Sciences");


	student.Input();
	student.Print();

	return 0;
}