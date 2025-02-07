#include<iostream>
using namespace std;
class Sample
{
    int x,y;
    public:
    void get()
    {
        cout<<"Enter a value of X: ";
        cin>>x>>y;
    }

//Declaration of friend class 
    friend class Demo;
};

class Demo
{
    public:
    //Accessing a private data member of friend class sample
    void put(Sample s)
    {
        cout<<"value of x & y : "<<s.x<<" "<<s.y;

    }
};

int main()
{
    Sample s ;
    Demo d1;
    s.get();
   d1.put(s);
}