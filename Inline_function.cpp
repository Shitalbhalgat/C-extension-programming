#include<iostream>
using namespace std;
 void f1()
{
	cout<<"Inline function"<<endl;
}
int main()
{
	cout<<"Main function "<<endl;
	f1();
}

/*
int f1(int num) { 
    return num*2;
}

int main() {
    
     cout<<"Calling a inline function : "<<f1(5);

    return 0;
}
*/
