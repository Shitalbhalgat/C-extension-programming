#include <iostream>

using namespace std;
// Template Function with a Type T
// template <class T>
// T Add (T a, T b) {
//  return (a+b);
// }
// 
// int main()
// {
//     int x = 10, y = 2;
//     float a = 1.2, b = 1.4;
//     
//     cout<<Add(x, y)<<endl;
//     cout<<Add(a, b)<<endl;
//     cout<<Add<string>("aaa","bbb")<<endl;
//     cout<<Add<bool>(true,false);
//     return 0;
// }


// // Template Function with a  differenrt Type T ,T1...
// template <class T,class T1>
// void Add (T a, T1 b) {
//  cout<<"Additon of two different data types : "<<a+b<<endl;
// }
// 
// int main()
// {
//     int x = 5, y = 2;
//     float a = 4.5, b = 1.3;
//     
//    Add(x, b);
//    Add(b, y);
//    Add<string,string>("aAAA","bAAA");
//    Add(true,false);
//     return 0;
// }

//Overload a  Template Function
// template <class T,class T1>
// void Add (T a, T1 b) {
//  cout<<"Additon of two different data types : "<<a+b<<endl;
// }
// 
// template <class T,class T1,class T2>
// void Add (T a, T1 b, T2 c) 
// {
//  cout<<"Additon of three different data types : "<<a+b+c<<endl;
// }
// 
// int main()
// {
//     int x = 5, y = 2;
//     float a = 4.5, b = 1.3;
//     
//    Add(x, b);
//    Add(x,a,b);
//   Add(true,false,10);
//     return 0;
// }



template <class T>
T Add (T a[], int size) {
    T sum=0;
    for(int i=0; i<size ;i++)
    sum=sum+a[i];
    return sum;
}



int main()
{
    int a[]={1,2,4,5};
   cout<<"Additon of array elements "<<Add(a,4);
    return 0;
}