// 1.Tyep conversion
// #include<iostream>
// using namespace std;
// void function(float);
// void function(int);
// void function(float x)
// {
// cout <<"Value of x is : " <<x<<endl;
// }
// void function(int y)
// {
// cout <<"Value of y is : " <<y<<endl;
// }
// int main()
// {
// function(3.4);
// function(34);
// return 0;
// }


//2. Function with Default Arguments
// #include<iostream>
// using namespace std;
// void function(int);
// void function(int,int);
// 
// void function(int x)
// {
// cout << "Value of x is : " <<x<<endl;
// }
// void function(int y,int z=12)
// {
// ::cout << "Value of y is : " <<y<<endl;
// ::cout << "Value of z is : " <<z<<endl;
// }
// int main()
// {
// function(12);
// return 0;
// }

//3.Function with a Pass by Reference
// #include <iostream>
// using namespace std ;
// void function(int);
// void function(int &);
// void function(int a)
// {
// cout << "Value of a is : " <<a<<endl;
// }
// void function(int &b)
// {
// cout << "Value of b is : " <<b<<endl;
// }
// 
// int main()
// {
// int x=10;
// function(x);
// return 0;
// }

// Function overloading by changing the number of arguments
// #include <iostream>
// using namespace std;
// 
// //Declaration of Function overloaing
// void Sum(int A, int B);
// void Sum(int A, int B, int C);
// void Sum(int A, int B, int C, int D);
// 
// int main()
// {
//     Sum(1,2);
//     Sum(1,2,3);
//     Sum(1,2,3,4);
//    return 0;
// }
// 
// void Sum(int A, int B)
// {
//      cout<< endl << "Sum is : "<< A+B;     
// }
// 
// void Sum(int A, int B, int C)
// {
//      cout<< endl << "Sum is : "<< A+B+C;     
// }
// 
// void Sum(int A, int B, int C, int D)
// {
//      cout<< endl << "Sum is : "<< A+B+C+D;     
// }
// Overloading using different types of parameters
#include <iostream>
using namespace std;

void display(int A);
void display(char A);
void display(float A);

int main()
{
    display(10);
    display('@');
    display(3.14f);

    return 0;
}

void display(int A)
{
     cout<< "Value of A : "<< A<<endl;     
}

void display(char A)
{
     cout<<"Value of A : "<< A<< endl;     
}

void display(float A)
{
     cout<< "Value of A : "<<A<<endl ;     
}