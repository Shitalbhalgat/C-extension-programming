#include<iostream>
using namespace std;
//global variable
int a=10;
void f1()
{
   // int a=30;
    cout<<"Value of local variable a in f1() : "<<a<<endl;
}
int main()
{
//local variable
  int b=20;
  int a=40;
  f1();
  cout<<"Value of local variable b in main: "<<b<<endl;
  cout<<"Value of local variable a in main : "<<a<<endl;
  //Asceesing a value of global variable 
   cout<<"Value of global variable a in main : "<<::a<<endl;

}