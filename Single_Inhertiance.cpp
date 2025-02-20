#include<iostream>
using namespace std;
class college
{
protected:
            char name[10];
            int collegecode;
};

//Single inheritance
class student:public college
{
char sname[10];
int rollno;
public:
void getdata()
{
    cout<<"Enter college name:";
    cin>>name;
    cout<<"Enter college code:";
    cin>>collegecode;
    cout<<"Enter student name";
    cin>>sname;
    cout<<"Enter roll no:";
    cin>>rollno;
}
void putdata()
{
cout<<"College name="<<name<<endl;
cout<<"College code="<<collegecode<<endl;
cout<<"Student name:="<<sname<<endl;
cout<<"Roll no:="<<rollno<<endl;
}
};
int main()
{
student s;
s.getdata();
s.putdata();


}
