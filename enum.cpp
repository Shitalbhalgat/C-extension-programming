#include <iostream>
using namespace std;
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };  
int main()  
{  
    week day;  
    day = Friday;  
	int var=Monday;
    cout <<"Day: "<<day+1<<endl;  
	cout<<"var : "<<var<<endl;
	if(var==Monday)
	cout<<" Monday";
    return 0;  
} 
//  
// // C++ Program to Demonstrate the Functioning of Enumerators with an example of Gender 
// 
// int main() 
// { 
// 	// Defining enum Gender 
// 	enum Gender { Male, Female,other}; 
// 
// 	// Creating Gender type variable 
// 	Gender g=Male;
//     cout<<g; 
// 	switch (g) { 
// 	case Male: 
// 		cout << "Gender is Male"; 
// 		break; 
// 	case Female: 
// 		cout << "Gender is Female"; 
// 		break; 
// 	default: 
// 		cout << "Value can be Male or Female"; 
// 	} 
// 	return 0; 
// }
