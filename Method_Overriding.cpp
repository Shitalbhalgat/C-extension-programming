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

     void display()
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
     //Same fucntion as base class with different defination
     void display()
     {
        cout<<"Value of x  and y : "<<x<<" "<<y<<endl;
     }
};
int main()
{
    A a(100);
    a.display();
    B b(10,20);
    b.A::display();     //Calling Base class function by using derived class object
    b.display();


}