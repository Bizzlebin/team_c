///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: student.cpp
// Date: December 3, 2020
// Programmer: William Gary Lineberger, ___________, ________________, ___________________             
//
// Description:
//    Holds the function prototypes for class "Student" 
//    which include the getters and setters for grades, ssn, and names
/////////////////////////////////////////////////////////////////////////

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
//Constructor
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
///////////////////////////////////////////////////////////////////////
//
// Function: read_first_name()                                          
//                                                                   
// Description:
//    reads the given first name
//
// Parameters:  
//    No parameters sent in               
//                                                       
// Returns:  
//    FIRST_NAME : the given first name                 
//                                            
///////////////////////////////////////////////////////////////////////

string Student::read_first_name() const
	{
	return FIRST_NAME;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: read_last_name()                                          
//                                                                   
// Description:
//    reads the given last name
//
// Parameters:  
//    No parameters sent in                
//                                                       
// Returns:  
//    LAST_NAME : the given last name                 
//                                            
///////////////////////////////////////////////////////////////////////

string Student::read_last_name() const
	{
	return LAST_NAME;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: update_ssn(string ssn)                                          
//                                                                   
// Description:
//    updates the variable ssn to the ssn given in read_ssn()
//
// Parameters:  
//    ssn  : the ssn found in read_ssn()            
//                                                       
// Returns:  
//    doesnt return anything                
//                                            
///////////////////////////////////////////////////////////////////////

void Student::update_ssn(string ssn)
	{
	this->ssn = ssn;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: read_ssn()                                          
//                                                                   
// Description:
//    reads the ssn off of the give file
//
// Parameters:  
//    No parameters sent in               
//                                                       
// Returns:  
//    ssn : the social security number found in the txt file                 
//                                            
///////////////////////////////////////////////////////////////////////

string Student::read_ssn()
	{
	return ssn;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: update_grades(double grades[4])                                          
//                                                                   
// Description:
//    The function updates the array grades[] to the grades found in the function read_grades[]
//
// Parameters:  
//    double grades[4] : grades array found in read_grades[]                   
//                                                       
// Returns:  
//    void function, doesnt return anything                
//                                            
///////////////////////////////////////////////////////////////////////

void Student::update_grades(double grades[4])
	{
	for (int i = 0; i < 4; i++)
		{
		this->grades[i] = grades[i];
		}
	}
///////////////////////////////////////////////////////////////////////
//
// Function: read_grades()                                          
//                                                                   
// Description:
//    The function is a pointer to the array grades[] which reads the grades of the given student
//
// Parameters:  
//    No parameters sent in              
//                                                       
// Returns:  
//    grades : returns the grades                 
//                                            
///////////////////////////////////////////////////////////////////////

const double *Student::read_grades() const
	{
	return grades;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: update_average_grade                                          
//                                                                   
// Description:
//    adjusts the average grade variable to match what was found in create_average_grade
//
// Parameters:  
//    double average_grade  : this is the average grade found in the function create_average_grade                      
//                                                       
// Returns:  
//    average_grade : the average grade                 
//                                            
///////////////////////////////////////////////////////////////////////

void Student::update_average_grade(double average_grade)
	{
	this->average_grade = average_grade;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: read_average_grade()                                          
//                                                                   
// Description:
//    reads the average grade
//
// Parameters:  
//    No parameters passed in                        
//                                                       
// Returns:  
//    average_grade : returns the average grade                 
//                                            
///////////////////////////////////////////////////////////////////////

double Student::read_average_grade()
	{
	return average_grade;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: read_student_count()                                          
//                                                                   
// Description:
//    The function reads the student count
//
// Parameters:  
//    No parameters passed in               
//                                                       
// Returns:  
//    student_count : the current number of students                 
//                                            
///////////////////////////////////////////////////////////////////////

int Student::read_student_count()
	{
	return student_count;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: create_average_grade()                                         
//                                                                   
// Description:
//    The function creates the average grade given the grades passed in
//
// Parameters:  
//    grades[]   : the array of the students grades                         
//                                                       
// Returns:  
//    total/4 : this is the numerical value of the average                 
//                                            
///////////////////////////////////////////////////////////////////////

double Student::create_average_grade()
	{
	double total = 0.0;
	for (int i = 0; i < 4; ++i)
		{
		total += grades[i];
		}
	return total / 4;
	}
///////////////////////////////////////////////////////////////////////
//
// Function: output_details()                                          
//                                                                   
// Description:
//    Takes the info gathered and displays it on the screen
//
// Parameters:  
//    LAST_NAME  : the last name         
//    FIRST_NAME : the first name  
//    ssn        : the social security number
//    average_grade : the average grade
//    grades[]   : the array of the students grades
//                                                       
// Returns:  
//    it is a void function                 
//                                            
///////////////////////////////////////////////////////////////////////

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