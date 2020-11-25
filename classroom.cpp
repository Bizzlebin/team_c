// ClassRoom
// 
// https://github.com/bizzlebin/team_c/blob/master/classroom.cpp
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
// Class file for StudentMain, creating a ClassRoom to hold Student objects, change the roster order, and generally provide wrappers for Student methods in aggregate.
// 

// 
// +++
// Imports
// 
#include "classroom.hpp"
// 
// ===
// Definitions
// 
// ---
// [Constructor(s)]
// 
ClassRoom::ClassRoom()
	{
	const int MAX_CLASS_SIZE = 24; // Must redeclare type if const

	name = "CSC134";
	student_count = 0;
//	students = new Student[MAX_CLASS_SIZE]; // Error until Student header/source is ready
	}
// 
// ---
// [Destructor]
// 
ClassRoom::~ClassRoom()
	{
//	delete[] students;
	}
// 
// ---
// Create Students
// 
void ClassRoom::create_students()
	{
	
	}
// 
// ---
// Update Students Order By Average Grade
// 
void ClassRoom::update_students_order_by_average_grade()
	{
	
	}
// 
// ---
// Update Students Order By Last Name
// 
void ClassRoom::update_students_order_by_last_name()
	{
	
	}
// 
// ---
// Create Class Average Grade
// 
// Create the average class grade based upon individual student averages.
// 
double ClassRoom::create_class_average_grade()
	{
	double total_grade = 0;

//	for (const auto& student: students) // *Very* useful, clean-looking Python-like iteration: https://stackoverflow.com/questions/10750057/how-to-print-out-the-contents-of-a-vector; note the limitation that the range *cannot* be shrunk using this form (eg, no Python-like """len(FIELD_NAMES) - 1""")
//		{
//		total_grade += student.read_average_grade();
//		}
	return total_grade / student_count;
	}
// 
// ---
// Output Class Details
// 
// Output all the student details for the class by iterating over each student and calling their display method.
// 
void ClassRoom::output_class_details()
	{
//	for (const auto& student: students)
//		{
//		std::cout << student.output_details();
//		}
	}
// 
// ---
// Read Student Count
// 
// Read the number of students in the classroom.
// 
int ClassRoom::read_student_count()
	{
	return student_count;
	}