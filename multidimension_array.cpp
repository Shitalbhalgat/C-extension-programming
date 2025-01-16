#include<iostream>
using namespace std;
int main()
{
     int a[2][2],i,j,r1,c1,r2,c2;
    // cout<<"Enter a Elements of array: ";
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<2;j++)
    //     {
    //     cin>>a[i][j];
    //     }
    // }
    // //size of matrix is
    // cout<<"Size of array is :"<<sizeof(a)<<endl;
    // cout<<"\n Elements of an array is : "<<endl;
    //   for(i=0;i<2;i++)
    // {
    //     for(j=0;j<2;j++)
    //     {
    //     //cout<<"a["<<i<<"]["<<j<<"] ="<<a[i][j]<<endl;
    //     cout<<"\t"<<a[i][j];
    //     }
    //     cout<<endl;
    // }
    
//Addition of 2D matrix
// cout<<"Enter the no of rows:";
// cin>>r;
// cout<<"\n Enter the no of coloums :";
// cin>>c;
// int x[r][c],y[r][c],z[r][c];
// cout<<"\n Enter a Elements of 1st  array: ";
//     for( i=0;i<r;i++)
//     {
//         for( j=0;j<c;j++)
//         {
//         cin>>x[i][j];
//         }
//     }
//   cout<<"\n Enter a Elements of 2nd  array: ";
//     for( i=0;i<r;i++)
//     {
//         for( j=0;j<c;j++)
//         {
//         cin>>y[i][j];
//         }
//     } 
//   cout<<"\n Addition of two array : \n ";
//     for( i=0;i<r;i++)
//     {
//         for( j=0;j<c;j++)
//         {
//         cout<<x[i][j]+y[i][j]<<"\t" ;
//         }
//         cout<<endl;
//     } 

//Multiplication of 2d array
cout<<"Enter the no of rows for 1st array:";
cin>>r1;
cout<<"\n Enter the no of coloums for 1st array :";
cin>>c1;
cout<<"Enter the no of rows for 2nd array:";
cin>>r2;
cout<<"\n Enter the no of coloums for 2nd array :";
cin>>c2;
int x[r1][c1],y[r2][c2],z[r1][c2];
if(c1==r2)
{
cout<<"\n Enter a Elements of 1st  array: ";
    for( i=0;i<r1;i++)
    {
        for( j=0;j<c1;j++)
        {
        cin>>x[i][j];
        }
    }
  cout<<"\n Enter a Elements of 2nd  array: ";
    for( i=0;i<r2;i++)
    {
        for( j=0;j<c2;j++)
        {
        cin>>y[i][j];
        }
    } 
    //Intializing the elements of array to 0
      for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            z[i][j]=0;
        }
        
    }
      cout<<"\n Multiplication of two array : \n ";
    for( i=0;i<r1;i++)
    {
        for( j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
               z[i][j]+=x[i][k]*y[k][j] ;
            }
    
        }
        
    }
      for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
        cout<<"\t"<<z[i][j];
        }
        cout<<endl;
    }

}
else 
{
    cout<<"Enter a correct input";

}

}
