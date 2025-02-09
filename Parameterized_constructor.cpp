#include <iostream>
using namespace std;

class ABC 
{
public:
    int X;
//     ABC()
//     {
// 
//     }
// Parameterized constructor 
    ABC(int a)
     {
         X = a*2;
    }
};

int main() {

    //ABC a1; // Will not throw error

    ABC a2(50);   // Calling the parameterized constructor

    //cout << a1.X << endl;
    cout << a2.X;

    return 0;
}