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
class students
	{
	public: 
		students();
		students(string fn, string ln, string ss, double ex[4]);
		~students();
		string getFirstName() const;
		void setFirstName(string FN) const;
		string getLastName() const;
		void setLastName(string LN) const;
		string getSocialSecurity();
		void setSocialSecurity(string SS);
		const double* getExam() const;
		void setExam(double exam[4]);
		double getStudentAvg();
		void setStudentAvg();
		void displayFunc();
		



	private:
		string firstname{};
		string lastname{};
		string socialsecurity{};
		double exam[4];
		double studentavg{};
		static int StudentNumber;
		



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
