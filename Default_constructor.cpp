#include<iostream>
using namespace std;
class demo
{
     int a;
public:
  
   //default constructor
     demo()
     {
        cout<<"Default constructor"<<endl;
        a=10;
     }
     void display()
     {
        cout<<"Value of a :"<<a<<endl;
     }

};
int main()
{
    demo d;     // Calling the default constructor
    d.display();
    return 0;
}
