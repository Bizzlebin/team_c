///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: classroom.hpp
// Date: November 24, 2020
// Programmer: Sage Putnam  //  Jeremiah Thomas    
//
// Description:
//    Header file for ClassRoom class.
/////////////////////////////////////////////////////////////////////////
// ClassRoom
// 
// Team C
// 
// https://github.com/bizzlebin/team_c/blob/master/classroom.hpp
// 
// ***
// 
// By Jeremiah Thomas, Sage Putnam, et al
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

#include "student.hpp"

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
///////////////////////////////////////////////////////////////////////
//
// Class: ClassRoom                                      
//                                                                   
// Description:
//    ClassRoom objects create and store an array of Student Objects, 
//    manipulate, and display the array.
//
//    List of data members:
//    string		name
//    int			student_count
//    Student		*students
//    const int		 MAX_CLASS_SIZE
//
//    List of member functions:
//    ClassRoom()
//    ~ClassRoom()
//    void create_students(const string I_FILENAME = "students.txt")
//    void update_students_order_by_average_grade()
//    void update_students_order_by_last_name()
//    double create_class_average_grade() const
//    void output_class_details() const
//    int read_student_count() const
//    
///////////////////////////////////////////////////////////////////////
class ClassRoom
	{
	public:
		string name;
		int student_count; // Due to assignment constraints (int vs reference or pointer), this is sadly *separate* from the """Student""" identifier of the same name
		Student *students;

		ClassRoom();
		~ClassRoom();
		void create_students(const string I_FILENAME = "students.txt");
		void update_students_order_by_average_grade();
		void update_students_order_by_last_name();
		double create_class_average_grade() const; // I am keeping these const as per https://isocpp.org/wiki/faq/const-correctness; the return is not const but the method cannot modify its object
		void output_class_details() const;
		int read_student_count() const;

	private:
		const int MAX_CLASS_SIZE = 24; // Not sure how to initialize outside of header
	};