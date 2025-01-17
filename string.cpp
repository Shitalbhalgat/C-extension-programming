#include<iostream>
#include<string>
using namespace std;
int main()
{
	// 1st way to create a string using character array
	// char ch[10];
	// char ch1[5]={'a','b','c','d','e'};
	// char ch2[]="hello";
	// //char ch3[];
	// cout<<"String ch,ch1,ch3"<<endl<<ch<<endl<<ch1<<endl<<ch2<<endl;
    // cout<<"enter a string:";
	// cin>>ch;
	// cout<<ch;
	// // cin.getline(ch,10);
	// // cout<<ch;
	// ch[3]='\0';
	// cout<<"\n After initalzing index 3 to null character :"<<ch;


	//2nd way to create a string using string class
  string s1;
  s1="hello";
  cout<<"string s1 is :"<<s1<<endl;
  string s2 ={"hello world "};
  // cout<<"string s2 is :"<<s2<<endl;
  // string s3 {s2};
  // cout<<"string s3 is :"<<s3<<endl;
  // string s4( 10,'A');
  // cout<<"string s4 is :"<<s4<<endl;
//   string s5 {s2,2};
//   cout<<"string s5 is :"<<s5<<endl;  
//   string s6 {"c++ programming",2};
//   cout<<"string s5 is :"<<s6<<endl; 
//  string s7;
//   cout<<"Enter a string ";
//   cin>>s7;
  //cout<<s7;
  // getline(cin,s7);
  // cout<<s7<<endl;

  // Accesing a string 
   // cout<<s1[0];
  // Iterating a string using for loop
//  for(char c: s7)
//  {
// 	cout<<c<<endl;
//  }

 //operations on string
// cout<<"Concatination of  two strings: "<<s1+s2<<endl;
// cout<<s1<<endl;
// cout<<"Concatination of  two strings: "<<s1+"world"<<endl;
// //cout<<"Concatination of  two strings: "<<"hello"+"world!"<<endl;
// cout<<"Relational operator on string (==): "<<(s1==s2)<<endl;
// cout<<"Relational operator on string (!=): "<<(s1!=s2)<<endl;
// cout<<"Relational operator on string (>): "<<(s1>s2)<<endl;
// cout<<"Relational operator on string (<): "<<(s1<s2)<<endl;
// cout<<"Relational operator on string (>=): "<<(s1>=s2)<<endl;
// cout<<"Relational operator on string (<=): "<<(s1<=s2)<<endl;
// 
// cout<<"Append a two string using (+=): "<<(s1+=s2)<<endl;
// 
// //member functions of string
// cout<<"Length of given string is using length() function : "<<s1.length()<<endl;
// 
// cout<<"Character at given index is using at() function : "<<s1.at(2)<<endl;
// 
// cout<<"Append  given string  using append() function : "<<s1.append(s2)<<endl;
// 
// cout<<"compare given string  using compare() function : "<<s1.compare(s2)<<endl;
// 
// cout<<" Erase given string  using erase() function : "<<s1.erase(3)<<endl;
// cout<<" Erase given string  using erase() function : "<<s2.erase(2,2)<<endl;

string str="ABCDEFG AB";
//find(str,pos,number of character to match)
// cout<<" find  the given string  using find() function : "<<str.find("AB")<<endl;
// cout<<" find  the given string  using find() function : "<<str.find("AB",3)<<endl;
// cout<<" find  the given string  using find() function : "<<str.find("ABCDE",3,3)<<endl;
// //substr(pos,n)
// cout<<" substring of the given string  using substr() function : "<<str.substr(2,3)<<endl;

//replace(pos,n1,n2,c)
// cout<<"Replace() function in string "<<str.replace(1,2,3,'#')<<endl;
// cout<<str<<endl;
// cout<<"Replace() function in string "<<str.replace(1,2,"@fd")<<endl;
// cout<<str<<endl;
// cout<<"Replace() function in string "<<str.replace(1,2,"abcdea",3,2)<<endl;
// cout<<str<<endl;
// cout<<"Replace() function in string "<<str.replace(1,2,"abcdea",4)<<endl;

//empty()
//cout<<"Empty() function in string "<<str.empty()<<endl;
//clear()
// str.clear();
// cout<<"Empty() function in string "<<str.empty()<<endl;

//copy(character array ,no of character,pos) 
// char ch[10];
// cout<<"copy() function in string "<<s1.copy(ch,5,0)<<endl;
// cout<<ch<<endl;
// 
// //push_back()
// cout<<"push_back() function in string ";
// str.push_back('$');
// cout<<str<<endl;
// 
// //pop_back()
// cout<<"pop_back() function in string ";
// str.pop_back();
// cout<<str<<endl;

//insert(pos,str,str_pos,n)
 cout<<"Insert() function in string "<<str.insert(6,"$$$")<<endl;
 cout<<"Insert() function in string "<<str.insert(6,"abcdefg",3,3)<<endl;
 cout<<"Insert() function in string "<<str.insert(6,"abcdefg",5)<<endl;
 cout<<"Insert() function in string "<<str.insert(6,2,'#')<<endl;
 cout<<"Find_first_of() function in string "<<str.find_first_of('#')<<endl;
 cout<<str.length();
 cout<<"Find_first_of() function in string "<<str.find_last_of('$',16)<<endl;

//swap()
cout<<"swap() function on string "<<endl;
str.swap(s1);
cout<<"After swapping value of str & s1 : "<<str<<","<<s1<<endl;





}
