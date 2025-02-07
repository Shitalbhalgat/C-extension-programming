#include<iostream>
using namespace std;
class Demo;  //forward Declaration
class Sample
{
    int x;
    public:
    void get()
    {
        cout<<"Enter a value of X: ";
        cin>>x;
    }

//Declaration of friend function  
    friend void fun(Sample,Demo);
};

class Demo
{
    int y;
    public:
    void get()
    {
        cout<<"Enter a value of y: ";
        cin>>y;
    }

//Declaration of friend function  
    friend void fun(Sample,Demo);
};

//Defining a friend function
void fun(Sample s1,Demo d)
{
  cout<<"Addition of private data menbers of two class : " <<s1.x+d.y;

}
int main()
{
    Sample s ;
    Demo d1;
    s.get();
   d1.get();

// Calling of friend function
    fun(s,d1);
}