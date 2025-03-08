#include<iostream>
#include<fstream>
using namespace std;
int main()
{

// // Reading from file using getline() function
//     ifstream fin("myfile.txt");
//     string str;
//     if(!fin){
//         cout<<"Error in file opening";
//     }
//     else
//     {
//      cout<<"File Opened Successfully"<<endl;
//     while(!fin.eof())
//     {
//        getline(fin,str);
//        cout<<str<<endl;
//     }
// }
//     // Reading from file using get() function
//      char c;
//     while(!fin.eof())
//     {
//       c=fin.get();
//        cout<<c;
//     }
//  
//     //Closing a file
// fin.close();}


 fstream f("Abc.txt",ios::in);
if(!f)
cout<<"Error in file opening";
else
{
    string str;
    cout<<"File Opened Successfully"<<endl;
    while(!f.eof())
    {
       getline(f,str);
       cout<<str<<endl;
    }
    f.close();
}
   
}
    
