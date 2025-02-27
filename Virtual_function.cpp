#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
     A(int a)
     {
        x=a;
     }
      virtual void display()
     {
        cout<<"Value of x : "<<x<<endl;
     }
};
class B:public A
{
    int y;
    public:
     B(int a ,int b): A(a) 
     {
        x=a;
        y=b;
     }
     void display()
     {
        cout<<"Value of x  and y : "<<x<<" "<<y<<endl;
     }
};
int main()
{
    A a(100),*p;
    p=&a;              //Initialize a pointer variable with address of object
    p->display();       //Call to a base class  function using pointer
   
    B b(10,20);
    p=&b;              
    p->display();          //Derived class function get called 


}