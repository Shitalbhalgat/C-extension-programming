#include <iostream>
using namespace std;
void f1(int n)
{
  n++;
}

int main()
{
    int a=10,x=100;
    f1(a);
    cout<<"Value of a : "<<a<<endl;
    f1(x);
   cout<<"value of x : "<<x;

}

//swapping of two numbers  using call by refernce
// void swap(int x, int y) {
//  int temp = x;
//  x = y;
//  y = temp;
// }
// 
// int main() {
//  int a = 40;
//  int b = 50;
//  cout << "Before swap: a = " << a << " b = " << b << endl;
//  swap(a, b);
//  cout << "After swap: a = " << a << " b = " << b << endl;
//  return 0;
// }

// 