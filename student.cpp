
// Student
// 
// https://github.com/bizzlebin/team_c/blob/master/student.cpp
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
// Class file for StudentMain, defining Student with names, grades, and more; also includes class/static var to count students and a str method to output the details.
// 

// 
// +++
// Imports
// 
#include "student.hpp"
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
int students::StudentNumber = 0;
// 
// +++
// Functions
// 
// ===
// Classes
// 
// Constructor
students::students()
{
	firstname = "";
	lastname = "";
	socialsecurity = "";
}

students::students(string fn, string ln, string ss, double ex[4])
{
	firstname = fn;
	lastname = ln;
	socialsecurity = ss;
	for (int i = 0; i < 4; i++)
	{
		exam[i] = ex[i];
	}

}

// Destructor
students::~students()
{
}

string students::getFirstName() const
{
	return firstname;
}

void students::setFirstName(string FN) const
{
	firstname = FN;
}

string students::getLastName() const
{
	return lastname;
}

void students::setLastName(string LN) const
{
	lastname = LN;
}

string students::getSocialSecurity()
{
	return socialsecurity;
}

void students::setSocialSecurity(string SS)
{
	socialsecurity = SS;
}

const double* students::getExam() const
{
	return exam;
}

void students::setExam(double ex[4])
{
	for (int i = 0; i < 4; i++)
	{
		exam[i] = ex[i];
	}
}

double students::getStudentAvg()
{
	return studentavg;
}

void students::setStudentAvg()
{
	double total = 0;
	for (int i = 0; i < 4; i++)
	{
		total =+ exam[i];
	}
	studentavg = total / 4;
}

void students::displayFunc()
{
	cout << firstname << " " << lastname << " " << socialsecurity << " ";
	for (int i = 0; i < 4; i++)
	{
		cout << exam[i];
	}
	
}




// 
// ===
// Definitions
// 

// 
// +++
// Output
// 

