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
// Updated 2020-11-25
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
// 
// +++
// Assignments
// 
// ===
// Initializations
// 

// 
// ===
// Constants
// 

// 
// +++
// Functions
// 
// ===
// Classes
// 

// 
// ===
// Definitions
// 

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
		std::cout << "students.txt\n";
		csc_134.create_students();
		}
	else
		{
		std::cout << alternate_i_filename << "\n";
		csc_134.create_students(alternate_i_filename);
		}

	return 0;
	}