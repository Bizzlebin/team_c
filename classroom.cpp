///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: classroom.cpp
// Date: November 24, 2020
// Programmer: Sage Putnam  //  Jeremiah Thomas    
//
// Description:
//    Class file for StudentMain, creating a ClassRoom to hold Student 
//    objects, change the roster order, and generally provide wrappers 
//    for Student methods in aggregate.
/////////////////////////////////////////////////////////////////////////


// ClassRoom
// 
// https://github.com/bizzlebin/team_c/blob/master/classroom.cpp
// 
// ***
// 
// By Jeremiah Thomas, Sage Putnam, et al
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

// 
// ===
// Definitions
// 
// ---
// [Constructor(s)]
// 

///////////////////////////////////////////////////////////////////////
//
// Function: ClassRoom()                                          
//                                                                   
// Description:
//    Constructor for ClassRoom class.
//
// Parameters:  
//    No parameters.               
//                                                       
// Returns:  
//    ClassRoom object is created for user.                 
//                                            
///////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////
//
// Function: ~ClassRoom()                                          
//                                                                   
// Description:
//    Destructor for ClassRoom class.
//
// Parameters:  
//    No parameters.               
//                                                       
// Returns:  
//    ClassRoom object is destroyed for user.                 
//                                            
///////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////////////////////
//
// Function: create_students()                                          
//                                                                   
// Description:
//    Create """Student""" objects from a text file, with basic bounds 
//    and error checking, and overwrite a dynamic array of "dummy" objects.
//
// Parameters:  
//    const string		I_FILENAME       
//                                                       
// Returns:  
//    Returns nothing.               
//                                            
///////////////////////////////////////////////////////////////////////
void ClassRoom::create_students(const string I_FILENAME)
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
		students[student_count] = Student(first_name, last_name, ssn, grades);
		++student_count; // Only increments this class's """student_count""" due to teacher constraints
		}
	i_file.close();
	}
// 
// ---
// Update Students Order By Average Grade
// 

///////////////////////////////////////////////////////////////////////
//
// Function: update_students_order_by_average_grade()                                        
//                                                                   
// Description:
//    Uses bubble sort to sort students array in descending order by 
//    each student's average grade.
//
// Parameters:  
//    No parameters.       
//                                                       
// Returns:  
//    Returns nothing.               
//                                            
///////////////////////////////////////////////////////////////////////
void ClassRoom::update_students_order_by_average_grade()
	{
	for (int pass = 0; pass < student_count - 1; pass++)
	{
		for (int comp = 0; comp < student_count - 1; comp++)
		{
			if (students[comp].read_average_grade() < students[comp + 1].read_average_grade())
			{
				Student tmp = students[comp];
				students[comp] = students[comp + 1];
				students[comp + 1] = tmp;
			}
		}
	}

	}
// 
// ---
// Update Students Order By Last Name
// 

///////////////////////////////////////////////////////////////////////
//
// Function: update_students_order_by_last name()                                        
//                                                                   
// Description:
//    Uses bubble sort to sort students array in ascending order by 
//    each student's last name.
//
// Parameters:  
//    No parameters.       
//                                                       
// Returns:  
//    Returns nothing.               
//                                            
///////////////////////////////////////////////////////////////////////
void ClassRoom::update_students_order_by_last_name()
	{
	for (int pass = 0; pass < student_count - 1; pass++)
	{
		for (int comp = 0; comp < student_count - 1; comp++)
		{
			if (students[comp].read_last_name() > students[comp + 1].read_last_name())
			{
				Student tmp = students[comp];
				students[comp] = students[comp + 1];
				students[comp + 1] = tmp;
			}
		}
	}
	}
// 
// ---
// Create Class Average Grade
// 
// Create the average class grade based upon individual student averages.
// 

///////////////////////////////////////////////////////////////////////
//
// Function: create_class_average_grade()                                        
//                                                                   
// Description:
//    Create the average class grade based upon individual student 
//    averages.
//
// Parameters:  
//    No parameters.       
//                                                       
// Returns:  
//    total_grade / student_count (or the calculated class average 
//    grade)                
//                                            
///////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////////////////////
//
// Function: output_class_details()                                        
//                                                                   
// Description:
//    Output all the student details for the class, in UEWSG-compliant 
//    form with table header, by iterating over each """Student""" and 
//    calling their display method.
//
// Parameters:  
//    No parameters.       
//                                                       
// Returns:  
//    Returns nothing.               
//                                            
///////////////////////////////////////////////////////////////////////
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

///////////////////////////////////////////////////////////////////////
//
// Function: read_student_count()                                        
//                                                                   
// Description:
//    Read the number of students in the classroom.
//
// Parameters:  
//    No parameters.       
//                                                       
// Returns:  
//    student_count               
//                                            
///////////////////////////////////////////////////////////////////////
int ClassRoom::read_student_count() const
	{
	return student_count;
	}