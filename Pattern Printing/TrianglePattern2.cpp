//write a program to make the pattern of piramid
#include<iostream>
using namespace std;
int main()
{
    for(int i=9;i>=1;i--)
    {
        for(int j=9-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=2*i-1;k>=1;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}




