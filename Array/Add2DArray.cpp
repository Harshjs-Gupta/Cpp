//write a program to add two matrix using 2D array
#include<iostream>
using namespace std;
int main()
{
   int A[3][3];
   int B[3][3];
   int C[3][3];
   cout<<"Enter the matrix A 3 by 3: \n";
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        cin>>A[i][j];
    }
   }
   cout<<"Enter the matrix B 3 by 3: \n";
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        cin>>B[i][j];
    }
   }
   cout<<endl;
   cout<<"Addition of two matrix is: \n";
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
     {
        C[i][j] = A[i][j] + B[i][j];
        cout<<C[i][j];
     }
     cout<<endl;
   }
    return 0;
} 
