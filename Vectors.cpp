#include <iostream>
#include <vector>
#include<iterator>
using namespace std;

int main() 
{
    
//     // create vector of int type
//     vector<int> num {1, 2, 3, 4, 5,4};
// 
//     // print vector elements using ranged loop
//     for (int number : num) {
//         cout<<number<<"  ";
//     }
// 
//     vector<int>::iterator itr = num.begin();
//     cout<<"\nFirst Element: "<<*itr<<" "<<endl;
// 
//     // change iterator to point to the last element
//     itr = num.end() - 1;
//     cout<<"Last Element: "<<*itr;
// 
//     return 0;
// }

//     // Declare a vector of integers
   vector<int> vec;

    // Adding elements to the vector using push_back
    vec.push_back(10); // Adds 10 to the end of the vector
    vec.push_back(20); // Adds 20 to the end of the vector
    vec.push_back(30); // Adds 30 to the end of the vector
    vec.push_back(40); // Adds 40 to the end of the vector

    // Output the elements using a range-based for loop
    cout<<"Vector elements: ";
    for (int val : vec) {
       cout<<val<<" ";
    }

    // Accessing elements using the at() method
cout<<"\n The element at index 2: " <<vec.at(2)<<endl;

    // Changing an element using index
    vec[1] = 100;

    // Output the updated vector
    cout<<"Updated vector elements: ";
    for (int val : vec) {
        cout<<val<<" ";
    }
  
  // Remove the last element using pop_back
    vec.pop_back();

    // Output the vector after removing an element
  cout<<"\n Vector after pop_back: ";
    for (int val : vec) {
        cout<<val<< " ";
    }

    // Size of the vector
    cout<<"\n Vector size: "<<vec.size();

    return 0;
}
