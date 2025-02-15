// #include <iostream> 
// using namespace std;
// class Length 
// {
//       int kmeter;            
//       int meter;           
//    public:
//      Length() 
//       {
//          kmeter = 0;
//          meter = 0;
//       }
//       Length(int km, int m) 
//       {
//          kmeter = km;
//          meter = m;
//       }
//       //overloading '<<' operator.
//       friend ostream &operator<<( ostream &output, Length &l) 
//       { 
//          output <<l.kmeter<< "Km "<<l.meter<<"M" ;
//          return output;            
//       }
//       //overloading '>>' operator.
//       friend istream &operator>>( istream  &input, Length &l ) 
//       { 
//          input >> l.kmeter >> l.meter;
//          return input;            
//       }
// };
// 
// int main() {
//    Length l1(1, 112), l2;
// 
//    cout << "Enter the value: " <<endl; 
//    cin >> l2;
//    cout << "First length: "<<l1 <<endl;
//    cout << "Second length: " <<l2 << endl;
//    
// 
//    return 0;
// }
#include <iostream> 
using namespace std;
class Student 
{
      string name;           
   public:
     
      //overloading '<<' operator.
      friend void operator <<( ostream &output, Student &l) 
      { 
         output <<l.name ;
                   
      }
      //overloading '>>' operator.
      friend void operator>>( istream  &input, Student &l ) 
      { 
         input >> l.name;
                  
      }
};

int main() {
   Student s1;

   cout << "Enter a name : " <<endl; 
   cin >> s1;
   cout << "Name of student : "<<s1 <<endl;

   

   return 0;
}