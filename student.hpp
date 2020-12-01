// Student
// 
// https://github.com/bizzlebin/team_c/blob/master/student.hpp
// 
// ***
// 
// By Jeremiah Thomas, et al
// 
// ***
// 
// Created 2020-11-24
// 
// Updated 2020-11-30
// 
// +++
// Description
// 
// Header file for Student class.
// 

// 
// +++
// Imports
// 
#ifndef STUDENTS_H
#define STUDENTS_H
#include <iostream>
#include <string>

using namespace std;
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
class Student
	{
	public: 
		Student();
		Student(string FIRST_NAME, string LAST_NAME, string ssn, double grades[4]);
		~Student();
		string read_first_name() const;
		string read_last_name() const;
		void update_ssn(string ssn);
		string read_ssn();
		void update_grades(double grades[4]);
		const double* read_grades() const;
		void update_average_grade();
		double read_average_grade();
		void output_details();
		
	private:
		string FIRST_NAME{};
		string LAST_NAME{};
		string ssn{};
		double grades[4];
		double average_grade{};
		static int student_count;
	};

#endif // STUDENTS
// 
// ===
// Definitions
// 

// 
// +++
// Output
// 
