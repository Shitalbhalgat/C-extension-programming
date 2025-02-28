#include <iostream>
using namespace std;

class Base
 {
public:
    // pure virtual function
    virtual void fun() = 0;
   
};

class Derived : public Base 
{
public:
    // implementation of the pure virtual function
    void fun() 
    { 
        cout << "fun() called";
     }
};

int main()
{
    
    Derived d;
    d.fun();
    return 0;
}
// // Abstract class  
// class Shape 
// {
//     public: 
//     virtual float Area() = 0; // Area is a pure virtual function   
// };
// class Square: public Shape 
// {
//     float a;
//     public:
//         Square(float l) 
//         {
//             a = l;
//         }
//     float Area()
//      {
//         return a * a; // returns area of square
//     }
// };
// class Circle: public Shape 
// {
//     float r;
//     public:
// 
//         Circle(float x) 
//         {
//             r = x;
//         }
//     float Area() 
//     {
//         return 3.14 * r * r;
//     }
// };
// int main()
// {
//     Shape * shape;
//     Square s(2);
//     Circle c(4);
//     shape = &s;
//     cout<<"The area of square is: "<<shape -> Area()<<endl;
//     shape = &c;
//     cout<< "The area of  circle is: "<<shape -> Area()<<endl;
//     return 0;
// }
