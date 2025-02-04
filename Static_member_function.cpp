#include<iostream>
using namespace std;
class demo
{
public:
        int y=10;
        //declare a static member function
        static int x;
    //defining a static member function
    static int fun()
        {
            cout<<"value of x: "<< x++<<endl;
            return x;
        }
};
//defining a static member function
int demo::x;
int main()
{  
    //Accessing a static function using class name
    cout<<"Accessing a static member function using class name : "<<demo::fun()<<endl;

    demo d;
    //Accessing a static member function using object
      cout<<"Accessing a static member function using object : "<<d.fun()<<endl;
    

}