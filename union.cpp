 #include <iostream> 
using namespace std; 

// Creating a union 
union student { 
// Defining data members 
	int rollno; 
	char grade; 
	float marks; 
}; 

int main() 
{ 

	// Defining a union variable 
	union student s1; 

	// Assigning values to data member of union student and printing the values of data members 
	s1.rollno = 25; 
	cout << "rollno : " << s1.rollno << endl; 

	s1.grade = 'C'; 
	cout << "Grade : " << s1.grade << endl; 

	s1.marks = 45; 
	cout << "marks : " << s1.marks << endl; 

// sharing a same memory address 
    cout << "Memory address of rollno: " << &s1.rollno<<endl;  
    cout << "Memory address of marks: " << &s1.marks<<endl; 
  
    cout << "Size of a union: " << sizeof(s1) << endl; 
	return 0; 
}
