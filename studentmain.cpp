// StudentMain
// 
// https://github.com/bizzlebin/team_c/blob/master/studentmain.cpp
// 
// ***
// 
// By Jeremiah Thomas, et al
// 
// ***
// 
// Created 2020-11-24
// 
// Updated 2020-12-02
// 
// +++
// Description
// 
// Main module for a ClassRoom containing many Student objects, with the ability to read each Student in from a text file and perform various sorts and data outputs.
// 

// 
// +++
// Imports
// 
#include "classroom.hpp"
#include "student.hpp"
// 
// +++
// Output
// 
int main()
	{
	std::string alternate_i_filename = "";
	ClassRoom csc_134;

	std::cout << "Welcome to the ClassRoom simulator!\n\n";

	std::cout << "Input student data filename or press Enter to default to students.txt: ";
	std::cin >> noskipws >> alternate_i_filename;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

	if (alternate_i_filename == "")
		{
		csc_134.create_students();
		}
	else
		{
		csc_134.create_students(alternate_i_filename);
		}

	std::cout << "\n";
	std::cout << "**Student details, sorted by average grade**:\n"; // Sort first: average
	csc_134.update_students_order_by_average_grade();
	csc_134.output_class_details();

	std::cout << "**Student details, sorted by last name**:\n"; // Sort first: last name
	csc_134.update_students_order_by_last_name();
	csc_134.output_class_details();

	std::cout << "**Average class grade**: " << csc_134.create_class_average_grade() << "\n";
	std::cout << "**Number of students in class**: " << csc_134.read_student_count() << "\n";

	return 0;
	}