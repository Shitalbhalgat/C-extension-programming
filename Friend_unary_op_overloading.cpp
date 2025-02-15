#include <iostream>
using namespace std;
class Number
{   
    int a, b, c;   
    public:
        Number()
        {
            a = b = c = 0;
        }
        Number(int i, int j, int k)
        {
            a = i;
            b = j;
            c = k;
        }

        // declaration of friend function to overload the ++ op
        friend Number operator ++ (Number &n);
        friend Number operator ++ (Number &n, int);

        void Display();
};

//Overload prefix ++ using a friend function.
Number operator ++(Number &n)
{
    n.a ++;
    n.b ++;
    n.c ++;
    return n;
}

 // Overload postfix ++ using a friend function.
Number operator ++ (Number &n, int)
{
    Number temp = n;
    n.a ++;
    n.b ++;
    n.c ++;
    return temp;
}

void Number::Display()
{
    cout << a << ", ";
    cout << b << ", ";
    cout << c << "\n";
}

int main()
{
    Number a(12, 22, 33);
    a.Display();

    ++a;              // operator ++(a);
    a.Display();

    a++; // postfix increment
    a.Display();

    return 0;
}