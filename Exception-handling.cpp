#include <iostream>
using namespace std;

int main() {

   float  a=10,b=0,c;
//    c=a/b;
//    cout<<c;
  try {

        // throw an exception if b is 0
        if (b == 0)
            throw 0;

        // not executed if b is 0
        c = a / b;
        cout<<a<<" / "<<b<<" = "<<c<<endl;
    } 

    catch (int n) {
        cout<<"Error: Cannot divide by "<<n<<endl;
    }

    return 0;
}



//