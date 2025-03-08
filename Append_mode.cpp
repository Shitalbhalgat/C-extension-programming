#include<iostream>
#include<fstream>
using namespace std;
int main()
{

// // Open a file in append mode
//     ofstream fout("myfile.txt",ios::app);
//    
//     if(!fout){
//         cout<<"Error in file opening";
//     }
//     else
//     {
//      cout<<"File Opened Successfully"<<endl;
//       fout<<"\nC++ is object oriented programming";
// }

// //Open a file in write mode using fstream class
// fstream f("Abc.txt",ios::out);
// if(!f)
// cout<<"Error in file opening";
// else
// {
//     f<<"ABC";
//     f.close();
// }

////Open a file in write mode using fstream class
fstream f("Abc.txt",ios::out|ios::app);
if(!f)
cout<<"Error in file opening";
else
{
    cout<<"File Opened Successfully"<<endl;
    f<<"PQR"<<endl;
    f.close();
}
   
}