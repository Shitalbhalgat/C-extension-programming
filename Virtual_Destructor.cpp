#include<iostream>
using namespace std;
class A 
{
   public:
      A()
       { 
         cout << "class A constructor " <<endl; 
      }
      ~A() { 
         cout << "class A destructor" <<endl; 
      }
};
class B:public A
{
   public:
   B()
   {
      cout << "class B constructor " <<endl; 
   }
   ~B()
   {
      cout << "class B destructor " <<endl; 

   }
};

int main() 
{
    A *obj=new B ;
    B *b = new B; 
  
    delete obj; 
    delete b;

    return 0;
}
