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
// Updated 2020-12-02
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

using namespace std;
// 
// ===
// Definitions
// 
// ---
// [Constructor(s)]
// 
ClassRoom::ClassRoom()
	{
	name = "CSC134";
	student_count = 0;
	students = new Student[MAX_CLASS_SIZE];
	}
// 
// ---
// [Destructor]
// 
ClassRoom::~ClassRoom()
	{
	delete[] students;
	}
// 
// ---
// Create Students
// 
// Create """Student""" objects from a text file, with basic bounds and error checking, and overwrite a dynamic array of "dummy" objects.
// 
void ClassRoom::create_students(const std::string I_FILENAME)
	{
	ifstream i_file; // These streams *cannot* be constants
	string line;

	i_file.open(I_FILENAME);
	if (!i_file.is_open())
		{
		cout << "Could not open file " << I_FILENAME << " !\n";
		cin.get(); // Pause at the end; not sure how to end program since this function is void
		}

	while (!i_file.eof() && student_count < MAX_CLASS_SIZE)
		{
		string first_name;
		string last_name;
		string ssn;
		double grades[4];

		i_file >> last_name >> first_name >> ssn >> grades[0] >> grades[1] >> grades[2] >> grades[3];
		// cout << first_name << last_name << ssn << grades[0] << grades[1] << grades[2] << grades[3] << "|" << student_count << "\n"; // Testing
		students[student_count] = Student(first_name, last_name, ssn, grades);
		++student_count; // Only increments this class's """student_count""" due to teacher constraints
		}
	i_file.close();
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
double ClassRoom::create_class_average_grade() const
	{
	double total_grade = 0.0;

	for (int i = 0; i < student_count; ++i)
		{
		total_grade += students[i].read_average_grade();
		}
	return total_grade / student_count;
	}
// 
// ---
// Output Class Details
// 
// Output all the student details for the class, in UEWSG-compliant form with table header, by iterating over each """Student""" and calling their display method.
// 
void ClassRoom::output_class_details() const
	{
	cout << "\t\"\"\"\n";
	cout << "\tLast Name, First Name, SSN,         Average (Grades)\n\n";

	for (int i = 0; i < student_count; ++i)
		{
		students[i].output_details();
		}
	cout << "\t\"\"\"\n";
	}
// 
// ---
// Read Student Count
// 
// Read the number of students in the classroom.
// 
int ClassRoom::read_student_count() const
	{
	return student_count;
	}