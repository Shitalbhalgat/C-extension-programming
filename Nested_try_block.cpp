// C++ program to illustrate the use of nested try blocks
#include <iostream>
using namespace std;

// function throwing exceptions
void func(int n)
{
    if (n < 10) {
        throw 22;
    }
    else {
        throw 'c';
    }
}

// driver code
int main()
{
    try {
        try {
            cout << "Throwing exception from inner try "
                    "block\n";
            func(2);
        }
        catch (int n) {
            cout << "Inner Catch Block caught the exception"
                 << endl;
        }
    }
    catch (char c) {
        cout << "Outer catch block caught the exception"
             << endl;
    }

    cout << "Out of the block";

    return 0;
}
