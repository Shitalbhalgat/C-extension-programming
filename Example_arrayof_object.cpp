#include<iostream>
using namespace std;
class bill
{
    int code[5],qty[5],price[5],amt[5],total=0,i;
    string name[5];
    public:
    void getdata()
    {
        cout<<"Enter a data of 5 items "<<endl;
        for(i=0;i<5;i++)
        {
            cout<<"Enter the code,name,quantity,price for item "<<i+1<<":";
            cin>>code[i]>>name[i]>>qty[i]>>price[i];
        }
    }
    void calculate()
    {
        for(i=0;i<5;i++)
        {
            amt[i]=qty[i]*price[i];
            total=total+amt[i];
        }

    }
    void display()
    { 
        cout<<"\n************* Bill for item ************\n";
        cout<<"code\tname\tquantity\tprice\tamount"<<endl; 
        cout << "---------------------------------------------------------------" << endl;


        for ( i = 0; i <5; i++)
        {
          cout<<code[i]<<"\t"<<name[i]<<"\t"<<qty[i]<<"\t\t"<<price[i]<<"\t"<<amt[i]<<endl; 
        }
       cout << "---------------------------------------------------------------" << endl;
       cout<<"\n\t\t\t\tTotal Amount ="<<total;
    }
    };
    int main()
    {
        bill b;
        b.getdata();
        b.calculate();
        b.display();
    }
    