#include<iostream>
using namespace std;
class number
{
    public:
    int a;
    
    // The function with object as an argument
    void sum (number n1)
    {
       a=a+n1.a;
         
    }
};
int main()
{
    number n1,n2;
    n1.a=10;
    n2.a=20;
    cout << "Initial Values \n";
    cout << "Value of object 1  & object 2 : " <<n1.a<<" "<<n2.a<<"\n\n";

    // Passing object as an argument to function sum ()
    n2.sum(n1);

    ///Changed values after passing object as argument
    cout << "New values \n";
    cout << "Value of object 1 & object 2 : "<<n1.a<<" "<<n2.a;
 
}

/* C++ Program to add two Complex Numbers
#include<iostream>
using namespace std;
class Complex{

    int real;
    int imag;
    public:
     //Function to set the values of real and imaginary part of each complex number
     void set()
    {
        cin>>real;
        cin>>imag;
    }
	//Function to display the sum of two complex numbers 
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
	//Function to add two complex numbers 
 
    void sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    };
int main()
    {
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.set();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.set();
        cout<<"Sum of two complex numbers is"<<endl;
        c3.sum(c1,c2);
        c3.display();
    return 0;
    }
    */