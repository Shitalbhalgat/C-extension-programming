#include<iostream>
using namespace std;
//Declaration of structure
struct student 
{
    int roll;
    string s;
    float marks;
    void display()
    {
       cout<<"Function inside the structure";
    }
};
int main()
{
// decalring a structure variable 
   struct  student s1;
//size of structure
    cout<<"Size of structure : "<<sizeof(s1)<<" bytes"<<endl; 
//Compile time initialization
  s1={1,"ABC",70};

//Ascessing a data member
cout<<"Roll no of student : "<<s1.roll<<endl;
cout<<"Name  of student : "<<s1.s<<endl;
cout<<"Marks of student : "<<s1.marks<<endl;

//Aceesing a member function
s1.display();
}
