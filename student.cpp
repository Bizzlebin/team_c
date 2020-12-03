
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
// Updated 2020-12-02
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

using namespace std;
// 
// ===
// Constants
// 
int Student::student_count = 0;
// 
// +++
// Functions
// 
// ===
// Classes
// 
// Constructor
Student::Student()
	{
	FIRST_NAME = "";
	LAST_NAME = "";
	ssn = "";
	}

Student::Student(string FIRST_NAME, string LAST_NAME, string ssn, double grades[4])
	{
	this->FIRST_NAME = FIRST_NAME;
	this->LAST_NAME = LAST_NAME;
	this->ssn = ssn;
	for (int i = 0; i < 4; i++)
		{
		this->grades[i] = grades[i];
		}
	average_grade = create_average_grade();
	++student_count; // Only count real students
	}

// Destructor
Student::~Student()
	{
	if (ssn == "") // Only call on dummy """Student""" objs; not sure why the destructor checks the *new* object's properties rather than the one being deleted: this is why the SSN check isn't reversed
		{
		--student_count;
		}
	}

string Student::read_first_name() const
	{
	return FIRST_NAME;
	}

string Student::read_last_name() const
	{
	return LAST_NAME;
	}

void Student::update_ssn(string ssn)
	{
	this->ssn = ssn;
	}

string Student::read_ssn()
	{
	return ssn;
	}

void Student::update_grades(double grades[4])
	{
	for (int i = 0; i < 4; i++)
		{
		this->grades[i] = grades[i];
		}
	}

const double *Student::read_grades() const
	{
	return grades;
	}

void Student::update_average_grade(double average_grade)
	{
	this->average_grade = average_grade;
	}

double Student::read_average_grade()
	{
	return average_grade;
	}

int Student::read_student_count()
	{
	return student_count;
	}

double Student::create_average_grade()
	{
	double total = 0.0;
	for (int i = 0; i < 4; ++i)
		{
		total += grades[i];
		}
	return total / 4;
	}

void Student::output_details()
	{
	cout << "\t" << left << setw(11) << LAST_NAME + ", " << setw(12) << FIRST_NAME + ", " << setw(13) << ssn + ", " <<fixed << setprecision(2) << average_grade << "   (";
	for (int i = 0; i < 4; i++)
		{
		cout << grades[i];
		if (i < 3)
			{
			cout << ", ";
			}
		}
	cout << ")\n";
	}