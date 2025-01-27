//cpp program to check enter string palindrome or not
#include<iostream>
#include<string.h>

using namespace  std;
int main()
{
  string ch,ch1,s;
int i,j;
cout<<"Enter a string ";
//getline(cin,ch);
cin>>ch;
// ch1=ch;
//  i=0,j=ch.length()-1;
// while(i<j)
// {
//   swap(ch[i],ch[j]);
//   i++,j--;
//   
// }
// if(ch1==ch)
// cout<<"string is palindorme";
// else 
// cout<<"string is not plaindorme";

// Replace a given character entered by user 
cout<<"ENTER A INDEX";
cin>>i;
cin>>s;
cout<<ch.insert(i,s);
//cout<<""<<ch.replace(i,1,"2");
//cout<<""<<ch.find(s,i);
// cout<<""<<ch.substr(i,i);
}
