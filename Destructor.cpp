#include <iostream>
using namespace std;

class Simple {
public:
    // Constructor
    Simple() {
        cout << "Constructor: Object created." << endl;
    }

    void fun()
    {
        cout<<"Funtion calling."<<endl;
    }

    // Destructor
    ~Simple() {
        cout << "Destructor: Object destroyed." << endl;
    }
};

int main() {
    // Creating an object of SimpleClass
    Simple obj;

    //Calling of member function
     obj.fun();

    // Destructor will be automatically called when obj goes out of scope
    return 0;
}
