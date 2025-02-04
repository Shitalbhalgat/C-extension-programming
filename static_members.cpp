#include<iostream>
using namespace std;
class demo
{
public:
        int y=10;
        //declare a static variable
        static int x;
      int fun() 
        {
            x++;
            y++;
            cout<<"value of x & y: "<< x<<"\t"<<y<<endl;
        }
};
//defining a static variable
int demo::x;
int main()
{  
    //Accessing a static variable using class name
    cout<<"Accessing a static variable using class name : "<<demo::x<<endl;

    demo d,d1;
    d.fun();
    
    //Accessing a static variable using object
      cout<<"Accessing a static variable using object : "<<d.x<<endl;
      
     d1.fun();

cout<<&d.x<<" "<<&d.y<<endl;

cout<<&d1.x<<" "<<&d1.y;

}

/*
class demo
{
public:
        int  x,y;
        static int z;
      void getdata(int a,int b)
        {
            x=a;
            y=b;
            z++;
        }
      void putdata()
      {
           cout<<"value of x,y& z: "<<x<<"\t"<<y<<"\t"<<z<<endl;
      }
    
};

int demo::z= 10;
int main()
{  
   demo d,d1;
    d.getdata(5,6);
    d.putdata();
    d1.getdata(8,9);
    d1.putdata();

}
*/