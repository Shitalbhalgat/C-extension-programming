#include<iostream>
using namespace std;

class Employee
{
  int id;
  string name;
  public:
  
  // Declaration of function
  void getdata();
  void putdata();
};

// Defining the function outside the class
void Employee::getdata()
{ 
  cout << "Enter Id : ";
  cin >> id;
  cout << "Enter Name : ";
  cin >> name;
}

// Defining the function outside the class
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}


int main()
{
  // This is an array of objects having maximum limit of 10 Employees
  Employee emp[10]; 
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
  
  // Accessing the function
  for(i = 0; i < n; i++) 
    emp[i].getdata();
  
  cout << "Employee Data - " << endl;
  
  // Accessing the function
  for(i = 0; i < n; i++) 
    emp[i].putdata();
}