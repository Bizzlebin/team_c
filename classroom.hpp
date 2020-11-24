// ClassRoom
// 
// https://github.com/bizzlebin/team_c/blob/master/classroom.hpp
// 
// ***
// 
// By Jeremiah Thomas, et al
// 
// ***
// 
// Created 2020-11-24
// 
// +++
// Description
// 
// Header file for ClassRoom class.
// 

// 
// +++
// Imports
// 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
// 
// +++
// Functions
// 
// ===
// Classes
// 
// ---
// ClassRoom
// 
class ClassRoom
	{
	public:
		string name = "CSC134";
		int student_count;
		Student* students = new Student[MAX_CLASS_SIZE];

		// Constructor
		ClassRoom();
		//ClassRoom();

		// Destructor
		~ClassRoom();


		void create_students();
		void update_students_order_by_average_grade();
		void update_students_order_by_last_name();
		void create_class_average_grade();
		void output_class_details();
		void read_student_count();

	private:
		const int MAX_CLASS_SIZE = 24;
	};