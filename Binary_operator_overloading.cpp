#include <iostream>   
using namespace std;
class Example  
{
    int num;  
    public:  
      void setValue(int val)
      {
        num = val;
    }
    // overloading + operator to add values in two objects
    Example operator + (Example obj)
    {  
        Example temp;  
        temp.num = num + obj.num;  
        return (temp);  
    }
    
    // overloading - operator to subtract values in two objects
    Example operator - (Example obj)
    {  
        Example temp;  
        temp.num = num - obj.num;  
        return (temp);  
    }
    
    // overloading * operator to multiply values in two objects
    Example operator * (Example obj){  
        Example temp;  
        temp.num = num * obj.num;  
        return (temp);  
    }
    
    // overloading / operator to divide values in two objects
    Example operator / (Example obj){  
        Example temp;  
        temp.num = num / obj.num;  
        return (temp);  
    }
    void getValue(){  
        cout << num;  
    }         
};
int main ()  
{  

    Example obj1, obj2, obj3;
    
    // accepting the values  
    obj1.setValue(80);  
    obj2.setValue(40);
    
    cout << "Value of Obj1: ";
    obj1.getValue();
    cout << "\nValue of Obj2: ";
    obj2.getValue();
    
    
    // assign result of obj1 and obj2 to obj3 
    obj3 = obj1 + obj2;  
    cout <<"\n\nObj1 + Obj2 : " ;  
    obj3.getValue(); 
        

    // subtraction
    obj3 = obj1 - obj2;
    cout <<"\nObj1 - Obj2 : " ;  
    obj3.getValue();      

    // multiplication
    obj3 = obj1 * obj2;  
    cout << "\nObj1 * Obj2 : " ;  
    obj3.getValue();
    
    // division  
    obj3 = obj1 / obj2;  
    cout << "\nObj1 / Obj2 : " ;  
    obj3.getValue();
    
    return 0;     
}  
