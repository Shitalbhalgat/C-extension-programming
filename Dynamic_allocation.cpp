#include <iostream>
using namespace std;
int main()
 {
// 
//    // allocating a memory to  int variable using new operator
//    int* a = new int;
//    *a = 5000;
//    float *b=new float(1.2);
// 
//    cout<<"Value of a : "<<*a<<endl;
//    cout<<"Value of b : "<<*b<<endl;
// 
//    // a memory deallocated using the delete operator
//    delete a;
// 
//    cout<<"Garbage value: "<<*a;
//    
// Assigned NULL to the  a pointer to avoid the situation of a dangling pointer.
//     a = NULL;
//    return 0;
// }

//Dynamic Memory Allocation for Arrays
    int num,i;
    cout << "Enter total number of elements in array: ";
    cin >> num;
   
// dynamically allocating an integer array of size  num using new operator 
	int* arr = new int[num];

	cout << "Enter  values in the array: ";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}	

	// displaying the array elements in the output
	cout << "\nArray elements: ";
	for(i = 0;i<num; i++)
	{
		cout<<arr[i]<<" ";
	}

	// dynamically deallocating the array using delete operator
	delete [] arr;
   

	// garbage values will be displayed as  the pointer will point to some deallocated locations
	cout << "\nGarbage array values after deallocation of array memory: ";
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
    arr=nullptr;
	return 0;
}

//Dynamic Memory Allocation for Objects

class A 
{
   public:
      A()
       { 
         cout << "A class constructor invoked!" <<endl; 
      }
      ~A() { 
         cout << "A class destructor invoked!" <<endl; 
      }
};

int main() 
{
    //constructor will be invoked of class A
    A* obj = new A; 

    //destructor will be invoked of class A
    delete obj; 

    return 0;
}
