#include<iostream>
using namespace std;
class myclass
{
   public:
   int x=20;
   void f1()
   {
    cout<<x;
   }
   void f2()
   {
    cout<<x;
   }
 

};
int main()
{
    myclass obj;
obj.f1();
    obj.x=10;
    cout<<obj.x;
    obj.f2();
    
}
