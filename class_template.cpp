#include <iostream>
using namespace std;

// Class template
// template <class T>
// class Number
//  {
//    // Variable of type T
//     T no;
// 
//    public:
//     Number(T n)
//     {
//           no=n;
//     } 
// 
//     T getNum() 
//     {
//         return no;
//     }
// };
// // 
// int main() {
// 
//     // create object with int type
//     Number<int> n1(10);
// 
//     // create object with double type
//     Number<double> n2(1.2);
// 
//     cout<<"int Number = "<<n1.getNum()<< endl;
//     cout<<"double Number = "<<n2.getNum()<< endl;
// 
//     return 0;
// }
// 
// 
// 
template <class T>
class Calculator
 {
 
    T n1, n2;

   public:
    Calculator(T n1, T n2) 
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    void display()
     {
        cout<<"Numbers: "<<n1<<" and "<<n2<<"."<<endl;
        cout<<n1<<" + "<<n2<<" = "<<add()<<endl;
        cout<<n1<<" - "<<n2<<" = "<<subtract()<<endl;
        cout<<n1<<" * "<<n2<<" = "<<multiply()<<endl;
        cout<<n1<<" / "<<n2<<" = "<<divide()<<endl;
    }

    T add() 
    { 
        return n1 + n2;
     }
    T subtract() 
    { 
        return n1 - n2;
     }
    T multiply() 
    { 
        return n1 * n2;
     }
    T divide() 
    { 
        return n1 / n2;
     }
};

int main() {
    Calculator<int> intCalc(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);

    cout<<"Int results:"<<endl;
    intCalc.display();

    cout<<"Float results:"<<endl;
    floatCalc.display();

    return 0;
}