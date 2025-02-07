#include<iostream>
using namespace std;
class Sample
{
    int x,y;
    public:
    void get()
    {
        cout<<"Enter a value of X & y: ";
        cin>>x>>y;
    }

//Declaration of friend function 
    friend void fun(Sample);
};
//Defining a friend function
void fun(Sample s1)
{
  cout<<"Addition of private data menbers : "<<s1.x+s1.y;

}
int main()
{
    Sample s ;
    s.get();

// Calling of friend function
    fun(s);
}