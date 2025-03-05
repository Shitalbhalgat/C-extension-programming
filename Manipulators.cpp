#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int no=123456;
    cout<<"setw() to set width "<<setw(10)<<no<<endl;
    cout<<"setfill() to fill the unused space : "<<setfill('#')<<setw(10)<<no<<endl;
    float a=3.14254678;
    cout<<"setprecision() to control number of digits of an output string : "<<setprecision(3)<<a<<endl;
    cout<<"setprecision() to control number of digits of an output string  : "<<fixed<<setprecision(3)<<a<<endl;
    cout<<"setprecision() to control number of digits of an output string  : "<<scientific<<setprecision(3)<<a<<endl;
    cout<<"setbase() to convert base for one numeric value to another base : "<<setbase(8)<<65<<endl;
    cout<<"setbase() to convert base for one numeric value to another base : "<<setbase(16)<<10<<endl;
    cout<<"setbase() to convert base for one numeric value to another base : "<<setbase(10)<<0xf<<endl;
    cout<<setw(10)<<"ABC"<<endl;
    cout<<setw(10)<<setiosflags(ios::left)<<"ABC"<<endl;
    cout<<setw(10)<<left<<"ABC"<<endl;
     cout<<setiosflags(ios::showpos)<<10<<endl;
   int b;
   cin>>a;
   cin>>noskipws>>b;
   cout<<b;

}