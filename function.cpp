#include <iostream>
using namespace std;

//declaring a function
void f1() 
{
    cout<<"Hello!"<<endl;
}
// function with reutrn type without   parameter 
int f2()
{
    return 10;
}
// function with reutrn type without parameter 
string f3()
{
     return "Hello world";
}
// function with reutrn type with parameter 
int f4(int a,int b)
{
    return a+b;
}
// function with default parameter
void myFunction(string country = "China") {
  cout << country << "\n";
}
// decalration of function 
void f5();
void f6(int ,int,int=10);
int main() {
// calling the function
f1();
//cout<<"Calling from f1 () "<<f1()<<endl;
cout<<"Calling from f2 () "<<f2()<<endl;
cout<<"Calling from f3 () "<<f3()<<endl;
cout<<" calling from f4() "<<f4(10,20);
  myFunction("UK");
  myFunction("India");
  myFunction();
  myFunction("USA");
  f5();
    f6();
    f6(1,2);
  f6(1);
    f6(1,2, 3);
    
   return 0;
}
void f5()
{
    cout<<"calling from f5()";
}
void f6(int a,int b,int c)
{
    cout<<"sun of three number is "<<a+b+c<<endl;
}


// }// program to add two numbers using a function
// 
// #include <iostream>
// 
// using namespace std;
// // function prototype
// void add(int, int); 
// // declaring a function
// int add(int a, int b) {
//     return (a + b);
// }
// 
// int main() {
// 
//     int sum;
//     
//     // calling the function and storing
//     // the returned value in sum
//     sum = add(100, 78);
// 
//     cout << "100 + 78 = " << sum << endl;
// 
//     return 0;
// }
