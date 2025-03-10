#include <iostream>
#include <fstream>
using namespace std;

class File
 {
  string filename;
public:
    File(string file) 
    {
    filename=file;
    }
  
    void writeToFile(string text)
     {
        ofstream fout(filename);  // Create and open the file

        if (fout.is_open())
         {
            fout<<text;  // Write content to the file
            cout<<"Data written to the file successfully."<<endl;
            fout.close();  // Close the file after writing
        } 
        else
         {
            cout<<"Error opening file for writing."<<endl;
        }
    }

    // Method to read data from the file
    void readFromFile() {

        ifstream fin(filename);  // Open the file for reading

        if (fin.is_open()) 
        {
            string line;
            while (getline(fin, line)) 
            { 
                 // Read each line from the file
                  cout<<line<<endl;
            }
            fin.close();  // Close the file after reading
        } 
        else 
        {
            cout<<"Error opening file for reading."<<endl;
        }
    }
};

int main() {
    string userInput;
    
    // Ask the user for input
    cout<<"Enter some text to save in the file: ";
    getline(cin, userInput);

    // Create an object of File class with a file name
    File f("example.txt");

    // Write the user input to the file
    f.writeToFile(userInput);

    // Read data from the file and display it
    cout<<"\nContents of the file:\n";
    f.readFromFile();

    return 0;
}
