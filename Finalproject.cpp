#include <iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class Student 
{
    public:
        string name;
        int rollNo;
        // bool isPresent=false
        int attendanceCount;
        Student() 
        {
            attendanceCount = 0;

        }
        
        // Function to display student attendance
        bool studentlogin(Student students[], int &studentCount) 
        {
            int rollNo;
            cout << "Enter your roll number: ";
            cin >> rollNo;
        
            // Authenticate student
            for (int i = 0; i <studentCount; i++)
            {
                if (students[i].rollNo == rollNo) 
                {
                displayStudent(rollNo,students,studentCount);
                 return true; 
                } 
            }
            return false;
         }
    void displayStudent( int roll ,Student students[], int &studentCount)
    {
        for (int i = 0; i < studentCount; i++) 
        {
            if (students[i].rollNo == roll) 
            {
                cout<<"\nAttendance for Roll No "<< students[i].rollNo <<" Name "<<students[i].name;
                // cout<<(students[i].attendanceCount ? "Present" : "Absent") << endl;
               int a= students[i].attendanceCount ? students[i].attendanceCount : 0 ;
               cout<<" : "<<a;

                break;
            }
        }
    }
    };
class admin
 {
    string username, password;
public:

bool Adminlogin() 
{
   const string correctPassword = "admin";
   cout<<"\n\t\t\tEnter username : ";
    cin>>username;
    cout<<"\n\t\t\tEnter password : ";
    cin>>password;
   return password == correctPassword;
}
int markAttendance(Student students[], int studentCount)
{
    int rollNo;
    bool found = false;
    cout<<"Enter roll number to mark attendance: ";
    cin>>rollNo;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == rollNo) 
        {
            students[i].attendanceCount++;
            found = true;
            cout<<"Attendance marked for "<<students[i].name<<endl;
            break;
        }
    }

    if (!found) 
    {
        cout<<"Student with roll number "<<rollNo <<"not found!"<<endl;
    }
writetofile(students, studentCount);
}

void addStudent(Student students[], int &studentCount) 
{
        string name;
        int rollNo;
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNo;
    
        students[studentCount].name = name;
        students[studentCount].rollNo = rollNo;
        students[studentCount].attendanceCount = 0;
        studentCount++;
        cout<<"Student added successfully!"<<endl;

// Save data to file after adding student
    writetofile(students, studentCount);
}

void listStudents(Student students[], int studentCount) {
    if (studentCount == 0) {
        cout<<"No students available!"<<endl;
        return;
    }

    cout<<"\nList of Students Registered\n";
    cout<<"-----------------------------------------------\n";
    cout<<"Roll No. | Name\n";
    cout<<"-----------------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        cout<<setw(8)<<students[i].rollNo<<" | "<<students[i].name<<endl;
    }
}
void writetofile(Student students[], int &studentCount) 
{
    ofstream outFile("student.txt",ios::binary);
    outFile.write((char*)&studentCount, sizeof(studentCount));
    outFile.write((char*)students, sizeof(Student) * studentCount);
    outFile.close();
}
void readfromfile(Student students[], int &studentCount) {
    ifstream inFile("student.txt", ios::binary);
    if (inFile) {
        inFile.read((char*)&studentCount, sizeof(studentCount));
        inFile.read((char*)students, sizeof(Student) * studentCount);
        inFile.close();
    } else {
        studentCount = 0; // File doesn't exist, start with no students
    }
}
void listAttendanceCount(Student students[], int studentCount) {
    if (studentCount == 0) {
        cout<<"No students available!"<<endl;
        return;
    }

    cout<<"\nList of Students with Attendance Count\n";
    cout<<"-----------------------------------------------\n";
    cout<<"Roll No. | Name                  | Attendance Count\n";
    cout<<"-----------------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
       cout<<setw(8)<<students[i].rollNo<<"| "<<setw(20)<<students[i].name<<" | " <<students[i].attendanceCount<<endl;
    }
}
};

    

int main()
{
    int choice;
    bool isAdmin = false;   
    admin a;
    Student students[100],s;
    int studentCount = 0; 
a.readfromfile(students, studentCount);
while (1) 
    {
        cout<< "\n\n ------------------ Welcome to Attendence Management System------------------\n";
        cout<< "\n\t\t\t1.Student login\n";
        cout<<"\t\t\t2.Admin login\n";
        cout<<"\t\t\t0.Exit\n";
        cout<<"\n\t\t\tEnter your choice... ";
        cin>>choice;
    switch(choice)
     {
        case 0:
            exit(0);
        case 1:
                if(s.studentlogin(students,studentCount))
                {
                   cout<<"\t\t";
                }
                else
                {
                    cout << "Invalid roll number!" << endl;
                }
            
            break;
        case 2:
           if(a.Adminlogin())
           {
            isAdmin = true;
             cout<<"\t\t\tLogin Successfull...";
                int adminchoice;
                do 
                {
                    cout<<"\n ------------------------ ADMIN MENU ------------------------\n";
                    cout<<"\n\t\t\t1.Mark attendance\n";
                    cout<<"\t\t\t2.Add students\n";
                    cout<<"\t\t\t3.List Students\n";
                    cout<<"\t\t\t4.Student attendance list\n";
                    cout<<"\t\t\t5. Logout\n";
                    cout<<"\t\t\tEnter your choice...";
                    cin>>adminchoice;
                    switch (adminchoice)
                    {
                       case 1:
                               a.markAttendance(students, studentCount);
                                break;
                        
                        case 2:
                                a.addStudent(students,studentCount);
                                break;
                        
                        case 3:
                                 a.listStudents(students, studentCount);
                                break;
                          
                        case 4:
                                a.listAttendanceCount(students, studentCount);
                                break;
                        case 5:
                               isAdmin = false;
                               cout<<"Logging out of admin panel..."<<endl;
                             break;
                        default:
                             cout<<"Invalid choice, please try again!"<<endl;  
                       
                     }
                }while (isAdmin);
            }
            
            else{
                cout<<"\t\t\tEnter a correct password";
            }
            break;

        default:
            cout<<"Invalid Option! Pease Try Again.\n";
    }
}
              
}
