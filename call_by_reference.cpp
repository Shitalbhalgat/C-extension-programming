#include <iostream>
using namespace std;
void f1(int &n)
{
  n++;
}

int main()
{
//& reference operator
int x=10, &y=x;
cout<<x<<y<<endl;
x=100;
cout<<x<<y<<endl;
//passing a value as refernce
f1(x);
cout<<"value of x : "<<x;

}


//swapping of two numbers using call by refernce
// void swap(int &a, int &b) {
//  int temp = a;
//  a = b;
//  b = temp;
// }
// int main() {
//  int x = 5;
//  int y = 10;
//  cout << "Before swap: x = " << x << " , y = " << y << endl;
//  swap(x,y);
//  cout << "After swap: x = " << x << ", y = " << y << endl;
//  return 0;
// }
