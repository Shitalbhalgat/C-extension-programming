#include <iostream>
using namespace std;
class Demo 
{
public:
    Demo() 
    { 
        cout<<"Constructor of Demo "<<endl;
    }
    ~Demo()
     { 
        cout<<"Destructor of Demo "<<endl;
     }
};

int main()
{
    try {

        Demo t1;
        throw 10;
    }
    catch (int i)
     {
      cout<<"Exception "<<i<<endl;
    }
}
