#include <iostream>
using namespace std;

class Rectangle
 {

    int length;
    int width;

public:
    // Default constructor
    Rectangle() 
    {
        length = 0;
        width = 0;
        cout <<"Default constructor called."<<endl;
    }

    // Parameterized constructor
    Rectangle(int l, int w) 
    {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Rectangle( Rectangle &r) {
        length = r.length;
        width = r.width;
        cout << "Copy constructor called." << endl;
    }

    // Function to calculate area
    int area()
     {
        return length * width;
    }

    // Function to display dimensions
    void display() 
    {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;
    }
};

int main() {
    // Creating object using default constructor
    Rectangle rect1;
    rect1.display();

    // Creating object using parameterized constructor
    Rectangle rect2(10, 5);
    rect2.display();

    // Creating object using copy constructor
    Rectangle rect3 = rect2;
    rect3.display();

    return 0;
}
