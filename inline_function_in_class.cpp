#include <iostream>
using namespace std;
class sample
{
  public:
  	inline int f1(int n);
// inline int f1(int num) { 
//    return num*2;
//}
};
inline int sample ::f1(int n)
{
	return n*2;
}
int main() {
    sample s;
     cout<<"Calling a inline function : "<<s.f1(5);

    return 0;
}
