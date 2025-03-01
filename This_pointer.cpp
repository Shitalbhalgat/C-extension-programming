#include<iostream>
using namespace std;
class A
{
    protected:
    int x=10;
    public:
    //  A(int x)
    //  {
    //    x=x;
    //  }
     void display()
     {
        cout<<"Value of x : "<<x<<endl;
        cout<<"Value of x : "<<this->x<<endl;
        cout<<"Value of x : "<<(*this).x<<endl;
     }
};
int main()
{
   A a,b;
   a.display();
   b.display();
}