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
// Updated 2020-11-25
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
		string name;
		int student_count;
//		Student* students; // Error until Student header/source is ready

		ClassRoom();
		~ClassRoom();
		void create_students();
		void update_students_order_by_average_grade();
		void update_students_order_by_last_name();
		double create_class_average_grade();
		void output_class_details();
		int read_student_count();

	private:
		const int MAX_CLASS_SIZE = 0; // Constant properties must be initialized, even with a dummy value
	};