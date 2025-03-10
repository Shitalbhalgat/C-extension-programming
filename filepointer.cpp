// #include <iostream>
// #include <fstream>
// using namespace std;
// int main() {
//     // Open a file for reading and writing
//    fstream file("example.txt",ios::in |ios::out);
// 
//     // Check if the file is open
//     if (!file) {
//        cerr<<"Error opening file!"<<endl;
//         return 1;
//     }
// 
//     // Read first 10 characters from the file
//     char buffer[11];  // Buffer to store data (10 + 1 for null terminator)
//     file.read(buffer, 10);
//     buffer[10] = '\0';  // Null-terminate the string
//    cout << "First 10 characters read: " << buffer <<endl;
// 
//     // Use tellg() to check the position of the get pointer
//    streampos readPosition = file.tellg();
//    cout << "Current position of get pointer (after reading): " << readPosition <<endl;
// 
//     // Use seekg() to move the get pointer to the beginning
//     file.seekg(0,ios::beg);
//    cout << "Get pointer moved to the beginning of the file." <<endl;
// 
//     // Read again from the start
//     file.read(buffer, 10);
//     buffer[10] = '\0';
//    cout << "First 10 characters after seeking: " << buffer <<endl;
// 
//     // Move the put pointer to the end of the file (for writing)
//     file.seekp(0,ios::end);
//     file << "\nNew data written at the end of the file.";
// 
//     // Use tellp() to check the position of the put pointer
//    streampos writePosition = file.tellp();
//    cout << "Current position of put pointer (after writing): " << writePosition <<endl;
// 
//     // Close the file
//     file.close();
// 
//     return 0;
// }
/*In C++, seekg, seekp, tellg, and tellp are methods used with file streams (ifstream, ofstream, and fstream) to move the file pointer and get the current position of the file pointer for reading and writing.

Here’s a breakdown of each of these functions:

1. seekg (Set Get Pointer)
Purpose: Used to move the "get pointer" (the pointer used for reading data) to a specific position in the input stream (reading).
Syntax: inputStream.seekg(offset, direction);
offset is the number of bytes to move the pointer.
direction can be one of the following:
std::ios::beg: Move the pointer relative to the beginning of the file.
std::ios::cur: Move the pointer relative to the current position.
std::ios::end: Move the pointer relative to the end of the file.
2. seekp (Set Put Pointer)
Purpose: Used to move the "put pointer" (the pointer used for writing data) to a specific position in the output stream (writing).
Syntax: outputStream.seekp(offset, direction);
offset is the number of bytes to move the pointer.
direction can be one of the following:
std::ios::beg: Move the pointer relative to the beginning of the file.
std::ios::cur: Move the pointer relative to the current position.
std::ios::end: Move the pointer relative to the end of the file.
3. tellg (Tell Get Pointer)
Purpose: Returns the current position of the "get pointer" in the input stream (the position from where the next read will occur).
Syntax: position = inputStream.tellg();
The returned position is the byte offset from the beginning of the file.
4. tellp (Tell Put Pointer)
Purpose: Returns the current position of the "put pointer" in the output stream (the position where the next write will occur).
Syntax: position = outputStream.tellp();
The returned position is the byte offset from the beginning of the file.
*/
#include <iostream>  
#include <fstream>  
using namespace std;  
  
int main()  
{  
    fstream st;    
st.open("example.txt",ios::out|ios::app|ios::ate);  // Creating new file   
  if(!st)  
    {  
        cout<<"File creation failed";  
    }     
else  
    {  
        cout<<"New file created"<<endl;         
        st<<"Hello Friends"; 
  // Checking the file pointer position         
        cout<<"File Pointer Position is "<<st.tellp()<<endl;    
      st.seekp(-1, ios::cur); // Go one position back from current position  
          
        //Checking the file pointer position       
          cout<<"As per tellp File Pointer Position is "<<st.tellp()<<endl; 
            
        st.seekp(-2, ios::cur);
          st<<"#";  
          st<<"qwer";
          
        st.close(); // closing file  
    } 
    
    
    st.open("example.txt",ios::in);   // Opening file in read mode     
if(!st) 
    {  
        cout<<"No such file";  
    }     
else  
    {  
        char ch;    
       st.seekg(5, ios::beg);  // Go to position 5 from begining.  
        cout<<"As per tellg File Pointer Position is "<<st.tellg()<<endl; //Checking file pointer position         
        st.seekg(1, ios::cur); //Go to position 1 from current location.  
        cout<<"As per tellg File Pointer Position is "<<st.tellg()<<endl; //Checking file pointer position  
        st.close();  
    }  
     
return 0;  
} 