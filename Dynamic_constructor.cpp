#include <iostream>
using namespace std;
class A
{
    int *x,size;
public:
    A()
    {
        x = new int; //Memory allocation at run time
        *x = 10;
    }
    A(int a)
    {
        x = new int; //Memory allocation at run time
        *x= a+1;
    }
//     A(int n)
//     {
//      size=n;
//      x=new int[size]{1,2,3,4};
// 
//     }
    void display()
    {
        cout<< *x <<endl;
    }
    ~A()
    {
        delete x ;
    }
};
int main()
{
    A obj1,obj2(20);
    cout<<"The value of object obj1 is: ";
    obj1.display();
    cout<<"\nThe value of object 0bj2 is: ";
    obj2.display();
    return 0;
}
