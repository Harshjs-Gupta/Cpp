//write a program to find the min of array element
#include<iostream>
using namespace std;
int main()
{
    int array[7]={6,9,1,5,11,2,3};
    int min;
    min=array[0];
    for(int i=1;i<7;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<"minimum is: "<<min;
    return 0;
}