///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: student.hpp
// Date: November 24, 2020
// Programmer: Shane Cawthon  //  William Lineberger    
//
// Description:
//    Header file for Student class.
/////////////////////////////////////////////////////////////////////////
// Student
// 
// Team C
// 
// https://github.com/bizzlebin/team_c/blob/master/student.hpp
// 
// ***
// 
// By Shane Cawthon, William Lineberger, et al
// 
// ***
// 
// Created 2020-11-24
// 
// Updated 2020-12-03
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
#include <iomanip>

using namespace std;
// 
// +++
// Functions
// 
// ===
// Classes
// 
// ---
// Student
//
///////////////////////////////////////////////////////////////////////
//
// Class: Student                                      
//                                                                   
// Description:
//    Student objects get and set the attributes for each student, 
//    return the average exam grade, and display the attributes for each student
//
//    List of data members:
//    string     FIRST_NAME
//    string     LAST_NAME
//    string     ssn
//    double     grades[4]
//    double     average_grade
//    static int student_count
//
//    List of member functions:
//    Student()
//    Student(string FIRST_NAME, string LAST_NAME, string ssn, double grades[4])
//    ~Student()
//    string read_first_name() const
//    string read_last_name() const
//    void update_ssn(string ssn)
//    string read_ssn()
//    void update_grades(double grades[4])
//    const double* read_grades() const
//    void update_average_grade(double average_grade)
//    double read_average_grade()
//    static int read_student_count()
//    double create_average_grade()
//    void output_details()
//    
///////////////////////////////////////////////////////////////////////
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
		const double *read_grades() const;
		void update_average_grade(double average_grade);
		double read_average_grade();
		static int read_student_count();
		double create_average_grade();
		void output_details();
		
	private:
		string FIRST_NAME;
		string LAST_NAME;
		string ssn;
		double grades[4];
		double average_grade;
		static int student_count;
	};
#endif // STUDENTS