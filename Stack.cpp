#include <iostream>
#include <stack>
using namespace std;
int main() {
    // Declare a stack of integers
    stack<int> stk;

    // Push elements onto the stack
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    // Output the top element (last pushed element)
    cout<< "Top element: "<<stk.top()<<endl;

    // Pop elements from the stack
    cout << "Popping elements:" << endl;
    while (!stk.empty()) {
        cout<<stk.top()<<" ";  // Print the top element
        stk.pop();  // Remove the top element
    }
    cout<<endl;

    // Check if the stack is empty
    if (stk.empty()) {
        cout<<"The stack is empty."<<endl;
    }

    return 0;
}
