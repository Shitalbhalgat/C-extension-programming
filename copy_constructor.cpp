#include <iostream>  
using namespace std;  
class Demo  
{  
   public:  
       int x;  
    Demo(int a)                // parameterized constructor.  
    {  
      x=a;  
    }  
    Demo(Demo &i)               // copy constructor  
    {  
        x = i.x;  
    }  
};  
int main()  
{  
  Demo a1(20);               // Calling the parameterized constructor.  
 Demo a2(a1);                //  Calling the copy constructor.  
 cout<<a2.x;  
  return 0;  
}  
