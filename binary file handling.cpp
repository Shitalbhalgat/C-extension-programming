#include <iostream>
#include <fstream>
using namespace std;
class Person 
{
public:
    string name;
    int age;
    Person(string n = "", int a = 0) {
       name=n;
       age = a;
    }

    void display() 
     {
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
};

int main() {
    
    Person p("ABC", 25);

    // Open file in binary mode for writing
    ofstream outFile("p.dat", ios::binary);
    if (!outFile) {
        cout<<"Error opening file for writing!"<<endl;
    }
    else{
 // Write object data to file
    outFile.write((char*)(&p), sizeof(p));
    outFile.close();
    }
    // Create another Person object to read data into
    Person p2;

    // Open the binary file for reading
    ifstream inFile("p.dat", ios::binary);
    if (!inFile) {
        cout<<"Error opening file for reading!"<<endl;
    }

    else{
    // Read the object data from the file
    inFile.read((char*)(&p2), sizeof(p2));
    inFile.close();

    // Display the read data
    cout<<"Data read from file:"<<endl;
    p2.display();}

    return 0;
}
