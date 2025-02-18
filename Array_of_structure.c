#include<stdio.h>
struct employee
{
    int emp_id;
    char emp_name[20];
    float emp_salary;
}s[3];
int main()
{
    int i;
    printf("Enter a details for 3 employees");
    for(i=0;i<3;i++)
    { 
        printf("\n Enter a details of employee%d",i+1);
        scanf("%d",&s[i].emp_id);
        scanf("%s",s[i].emp_name);
        scanf("%f",&s[i].emp_salary);
        
    }
    for(i=0;i<3;i++)
    { 
        printf("Emp_id :%d \t Emp_name : %s \t Emp_salary:%f \n",s[i].emp_id,s[i].emp_name,s[i].emp_salary);
  
    }

}


// #include<stdio.h>
// struct Student
// {
//     int rollno;
//     char name[20];
//     float marks;
// }s[3];
// int main()
// {
//     int i;
//     printf("Enter a details for 3 Students");
//     for(i=0;i<3;i++)
//     { 
//         printf("\n Enter a details of Student%d",i+1);
//         scanf("%d",&s[i].rollno);
//         scanf("%s",s[i].name);
//         scanf("%f",&s[i].marks);
//         
//     }
//     struct Student s1=s[0];
//     for(i=0;i<3;i++)
//     { if(s[i].marks>s1.marks)
//         {
//              s1=s[i];
//         }
//      }
//      printf("Rollno :%d \t Name : %s \t Marks:%f \n",s1.rollno,s1.name,s1.marks);
// 
// }