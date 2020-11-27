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
		//students();
		students(string FirstName, string LastName, string SocialSecurity);
		//~students();
		void setFirstName() const;
		string getFirstName() const;
		void setLastName() const;
		string getLastName() const;
		void setSocialSecurity();
		string getSocialSecurity();
		//void Exam
		void setStudentAvg();
		double getStudentAvg();



	private:
		string FirstName;
		string LastName;
		string SocialSecurity;
		double Exam[4];
		double StudentAvg;
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
